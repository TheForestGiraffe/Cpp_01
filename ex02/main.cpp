/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 01:05:28 by pecavalc          #+#    #+#             */
/*   Updated: 2026/04/13 01:22:38 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
 std::string string = "HI THIS IS BRAIN";
 std::string* stringPTR = &string;
 std::string& stringREF = string;

 std::cout << "Memory address of the string variable: " << &string << "\n";
 std::cout << "Memory address held by stringPTR: " << stringPTR << "\n";
 std::cout << "Memory address held by stringREF: " << &stringREF << "\n";

 std::cout << "\n";
 
 std::cout << "Value of the string variable: " << string << "\n";
 std::cout << "Value pointed to by stringPTR: " << *stringPTR << "\n";
 std::cout << "Value pointed to by stringREF: " << stringREF << "\n";
 
 return 0;
}
