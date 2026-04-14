/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 21:16:36 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/14 21:35:15 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Simple test harness for replace:
   - Runs ../replace on six input files with given s1/s2
   - Compares output byte-by-byte with expected files
   - Runs ../replace with non-existent file as argument
   - Reports FAIL per case, or "All tests passed" if all succeed */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

// Load input and input.replace files and compare them byte-by-byte
static bool same(const std::string& path_a, const std::string& path_b) {
  std::ifstream f1(path_a.c_str(), std::ios::binary);
  std::ifstream f2(path_b.c_str(), std::ios::binary);

  if (!f1.is_open() || !f2.is_open())
    return false;

  char c1, c2;
  while (true) {
    f1.get(c1);
    f2.get(c2);

    if (f1.eof() && f2.eof())
      return true;

    if (f1.eof() || f2.eof() || c1 != c2)
      return false;
  }
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

  std::string s1[] = {"", "a", "line", "file", "sentence", "line"};
  std::string s2[] = {"X", "aa", "", "DOC", "phrase", "item"};

  for (int i = 0; i < 6; i++) {
    std::string in = "files/" + names[i];
    std::string out = in + ".replace";
    std::string exp = "expected/" + names[i] + ".replace";

    std::remove(out.c_str());

    std::string cmd = "../replace \"" + in + "\" \"" + s1[i]
                      + "\" \"" + s2[i] + "\"";

    if (std::system(cmd.c_str()) != 0 || !same(out, exp)) {
      std::cout << "FAIL: " << names[i] << "\n";
      fails++;
    }
  }

  if (std::system("../replace does_not_exist x y > /dev/null 2>&1") == 0) {
    std::cout << "FAIL: file not found\n";
    fails++;
  }

  if (!fails)
    std::cout << "All tests passed\n";

  return fails;
}