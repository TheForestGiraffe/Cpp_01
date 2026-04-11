/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 23:45:08 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 00:55:24 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::~Zombie() {
    std::cout << name_ << "'s destructor called.\n";
}

void Zombie::announce() {
    std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
