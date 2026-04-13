/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 02:00:53 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/13 03:06:55 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
  public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();

    void attack() const;

  private:
    std::string name_;
    Weapon& weapon_;
};

#endif