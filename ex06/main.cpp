/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 02:22:09 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/15 20:31:49 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cout << "Invalid number of arguments.\n";
    return 1;
  }

  Harl harl;
  harl.complain(std::string(argv[1]));

  return 0;
}
