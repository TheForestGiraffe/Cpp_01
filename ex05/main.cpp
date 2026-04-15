/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 02:22:09 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/15 02:42:53 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main() {
  Harl harl;

  std::cout << "DEBUG Level:\n";
  harl.complain("DEBUG");
  std::cout << '\n';

  std::cout << "INFO Level:\n";
  harl.complain("INFO");
  std::cout << '\n';

  std::cout << "WARNING Level:\n";
  harl.complain("WARNING");
  std::cout << '\n';

  std::cout << "ERROR Level:\n";
  harl.complain("ERROR");
  std::cout << '\n';

  std::cout << "BANANA Level:\n";
  harl.complain("BANANA");
  std::cout << '\n';

  return 0;
}
