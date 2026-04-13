/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 02:04:01 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/13 02:07:51 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA() {};

HumanA::~HumanA() {};

void HumanA::attack() const {
 std::cout << name_ << " attacks with their " << weapon_.getType() << "\n";
}