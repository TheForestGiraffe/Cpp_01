/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:44:27 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/15 19:04:32 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

typedef enum s_level {
  DEBUG,
  INFO,
  WARNING,
  ERROR
} t_level;

class Harl {
  public:
    Harl();
    ~Harl();

    void complain(const std::string& level) const;

  private:
    void debug() const;
    void info() const;
    void warning() const;
    void error() const;
};

#endif