/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 22:23:39 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 23:14:17 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
 int number_zombies = 3;

 Zombie* zombie_array = zombieHorde(number_zombies, std::string("Jeff"));
 if (!zombie_array)
  return 1;

 for (int i = 0; i < number_zombies; i++) {
  zombie_array[i].announce();
 }

 delete[] zombie_array;
 return 0;
}