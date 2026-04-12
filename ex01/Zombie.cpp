/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 23:45:08 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 23:09:47 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() {}

Zombie::Zombie(const std::string& name) : name_(name) {}

Zombie::~Zombie() {
 std::cout << name_ << "'s destructor called.\n";
}

void Zombie::announce() const {
 std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string& name) {
 name_ = name;
}
