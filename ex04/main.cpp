/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:25:15 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/14 16:50:04 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "Invalid number of arguments.\n";
    return 1;
  } 

  std::ifstream in_file(argv[1]);
  if (!in_file) {
    std::cerr << "Could not open file.\n";
    return 1;
  }

  std::string s1 = argv[2];
  std::string s2 = argv[3];

  std::string line;
  std::string::size_type line_pos;
  
  std::string out_filename = std::string(argv[1]) + ".replace";
  std::ofstream out_file(out_filename.c_str());
  if (!out_file) {
    in_file.close();
    std::cerr << "Could not create " << out_filename << " file.";
    return 1;
  }

  while (std::getline(in_file, line)) {
    if (s1.empty()) {
      out_file << line + '\n';
      continue;
    }
    line_pos = 0;
    while(true) {
      line_pos = line.find(s1, line_pos);
      if (line_pos != std::string::npos) {
        line.erase(line_pos, s1.length());
        line.insert(line_pos, s2);
        line_pos += s2.length();
      }
      else {
        out_file << line + '\n';
        break ;
      }
    }
  }

  if (in_file.eof())
    return 0;
  else {
    std::cerr << "Could not read line from file.\n";
    return 1;
  }
}
