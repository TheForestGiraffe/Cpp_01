/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 00:18:55 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 00:55:30 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main( void ) {
    Zombie* zombie = newZombie(std::string("Aroldo"));
    zombie->announce();
    delete(zombie);
    
    randomChump(std::string("Zeca"));
    
    return 0;
}