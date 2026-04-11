/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 23:37:35 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/12 00:24:29 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
    public:
        Zombie( std::string name );
        ~Zombie();

        static Zombie* newZombie( std::string name );
        static void randomChump( std:: string name );

    private:
        void announce( void );
        std::string name_;
};

#endif
