/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:25:15 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/14 21:59:58 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static void write_line(const std::string& line, std::ifstream& infile,
                       std::ofstream& outfile) {
  outfile << line;
  if (!infile.eof()) {
    outfile << '\n';
  }
}

static int find_and_replace(const std::string& s1, const std::string& s2,
                            std::ifstream& infile, std::ofstream& outfile) {
  std::string line;

  if (s1.empty()) {
    while (std::getline(infile, line)) {
      write_line(line, infile, outfile);
    }
  }
  else {
    std::string::size_type line_pos;
    while (std::getline(infile, line)) {
      line_pos = 0;
      line_pos = line.find(s1, line_pos);
      while (line_pos != std::string::npos) {
        line.erase(line_pos, s1.length());
        line.insert(line_pos, s2);
        line_pos += s2.length();
        line_pos = line.find(s1, line_pos);
      }
      write_line(line, infile, outfile);
    }
  }

  if (!infile.eof()) {
    std::cerr << "Could not read line from file.\n";
    return 1;
  }
  return 0;
}

int main(int argc, char** argv) {
  if (argc != 4) {
    std::cerr << "Invalid number of arguments.\n";
    return 1;
  }

  std::ifstream infile(argv[1]);
  if (!infile) {
    std::cerr << "Could not open file.\n";
    return 1;
  }

  std::string outfile_name(std::string(argv[1]) + ".replace");
  std::ofstream outfile(outfile_name.c_str());
  if (!outfile) {
    std::cerr << "Could not create " << outfile_name << " file.\n";
    return 1;
  }

  std::string s1 = argv[2];
  std::string s2 = argv[3];
  if (find_and_replace(s1, s2, infile, outfile)) {
    return 1;
  }

  return 0;
}
