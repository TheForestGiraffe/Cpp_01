/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 02:00:53 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/13 03:07:26 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
  public:
    HumanB(const std::string& name);
    ~HumanB();

    void attack() const;
    void setWeapon(Weapon& weapon);

  private:
    std::string name_;
    Weapon* weapon_;
};

#endif