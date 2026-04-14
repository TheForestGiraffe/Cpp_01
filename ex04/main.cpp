/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:25:15 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/14 12:48:10 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

static int validate_input(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Invalid number of arguments.\n";
    return 1;
  }
  return 0;
}

int main(int argc, char **argv) {
  if (validate_input(argc, argv))
    return 1;

  std::ifstream file(argv[1]);
  if (!file) {
    std::cout << "Could not open file.\n";



  return 0;
}
