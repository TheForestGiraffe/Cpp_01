/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 02:04:01 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/13 03:19:27 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : name_(name), weapon_(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
  weapon_ = &weapon;
}

void HumanB::attack() const {
  if (weapon_)
    std::cout << name_ << " attacks with their " << weapon_->getType() << "\n";
}
