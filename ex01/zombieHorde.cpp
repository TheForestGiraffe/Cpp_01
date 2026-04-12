/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 22:11:29 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 23:13:16 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name){
 if (N <= 0)
  return NULL;

 Zombie* zombie_array = new Zombie[N];
  for (int i = 0; i < N; i++) {
   zombie_array[i].setName(name);
  }

 return zombie_array;
}
