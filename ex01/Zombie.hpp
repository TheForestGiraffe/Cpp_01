/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 23:37:35 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 23:05:41 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
 public:
  Zombie();
  Zombie(const std::string& name);
  ~Zombie();

  void announce() const;
  void setName(const std::string& name);

 private:
  std::string name_;
};

Zombie* zombieHorde(int N, std::string name);

#endif
