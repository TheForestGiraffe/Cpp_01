/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 23:37:35 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/13 01:26:33 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
public:
  Zombie(std::string name);
  ~Zombie();
  
  void announce(void);

private:
  std::string name_;
  
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
