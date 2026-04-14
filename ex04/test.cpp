/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 21:16:36 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/14 21:59:21 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Simple test harness for replace:
   - Creates six input files
   - Runs ./replace on them with given s1/s2
   - Compares output file with expected content
   - Runs ./replace with non-existent file as argument
   - Reports FAIL per case, or "All tests passed" if all succeed */

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

static bool write_file(const std::string& path, const std::string& content) {
  std::ofstream file(path.c_str(), std::ios::binary);
  if (!file.is_open())
    return false;
  file << content;
  return file.good();
}

static bool same_as_string(const std::string& path,
                           const std::string& expected) {
  std::ifstream file(path.c_str(), std::ios::binary);
  std::string got;
  char c;

  if (!file.is_open())
    return false;
  while (file.get(c))
    got += c;
  return got == expected;
}

int main() {
  int fails = 0;

  std::string names[] = {
    "empty",
    "repeated_char_w_line_break",
    "line_break_on_beginning",
    "no_line_break_at_the_end",
    "sentences_with_empty_lines",
    "two_line_breaks_at_the_end"
  };

  std::string inputs[] = {
    "",
    "This is aaaaaa line\n",
    "\nhello line",
    "this file",
    "first sentence\n\nsecond sentence\n",
    "first line\nsecond line\n\n"
  };

  std::string s1[] = {"", "a", "line", "file", "sentence", "line"};
  std::string s2[] = {"X", "aa", "", "DOC", "phrase", "item"};

  std::string expected[] = {
    "",
    "This is aaaaaaaaaaaa line\n",
    "\nhello ",
    "this DOC",
    "first phrase\n\nsecond phrase\n",
    "first item\nsecond item\n\n"
  };

  for (int i = 0; i < 6; i++) {
    std::string in = names[i];
    std::string out = in + ".replace";

    std::remove(in.c_str());
    std::remove(out.c_str());

    if (!write_file(in, inputs[i])) {
      std::cout << "FAIL: could not create input file for " << names[i] << "\n";
      fails++;
      continue;
    }

    std::string cmd = "./replace \"" + in + "\" \"" + s1[i]
                      + "\" \"" + s2[i] + "\"";

    if (std::system(cmd.c_str()) != 0 || !same_as_string(out, expected[i])) {
      std::cout << "FAIL: " << names[i] << "\n";
      fails++;
    }

    std::remove(in.c_str());
    std::remove(out.c_str());
  }

  if (std::system("./replace does_not_exist x y > /dev/null 2>&1") == 0) {
    std::cout << "FAIL: file not found\n";
    fails++;
  }

  if (!fails)
    std::cout << "All tests passed\n";

  return fails;
}