/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 00:18:55 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 00:31:28 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main( void ) {
    Zombie* zombie = Zombie::newZombie( std::string("Aroldo") );
    Zombie::randomChump( std::string("Zeca"));
    delete(zombie);
    return 0;
}