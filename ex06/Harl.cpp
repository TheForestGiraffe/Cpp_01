/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:27:43 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/15 21:03:24 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(const std::string& level) const {

  const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  const int levels_length = 4;
  int index = -1;

  for (size_t i = 0; i < levels_length; i++) {
    if (levels[i] == level) {
      index = i;
    }
  }

  if (index == -1) {
    return ;
  }

  switch (index) {
    case DEBUG:
      Harl::debug();
      Harl::info();
      Harl::warning();
      Harl::error();
      break;
    case INFO:
      Harl::info();
      Harl::warning();
      Harl::error();
      break;
    case WARNING:
      Harl::warning();
      Harl::error();
      break;
    case ERROR:
      Harl::error();
  }
}

void Harl::debug() const {
  std::cout << "I love having extra bacon for my "
            << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
            << "I really do!\n";
}

void Harl::info() const {
  std::cout << "I cannot believe adding extra bacon costs more money. "
            << " You didn’t put enough bacon in my burger! "
            << "If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning() const {
  std::cout << "I think I deserve to have some extra bacon for free. "
            << "I’ve been coming for years, whereas you started working "
            << "here just last month.\n";
}

void Harl::error() const {
  std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
