/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 01:48:17 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/13 02:00:45 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon() {}

Weapon::~Weapon() {}

void Weapon::setType(const std::string& type) {
 type_ = type;
}

const std::string& Weapon::getType() const {
 return type_;
}