/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:46:11 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 16:12:08 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
std::cout << "-------------------------------------------- Initial State --------------------------------------------\n" << std::endl;
ClapTrap clapOne("ClapOne");
ScavTrap scavOne("ScavOne");
FragTrap fragOne("FragOne");

std::cout << "\nInitial States:" << std::endl;
std::cout << "ClapOne - Health: " << clapOne.getTypeHit() << ", Energy: " << clapOne.getTypeEneryg() << ", Attack Power: " << clapOne.getTypeDamage() << std::endl;
std::cout << "ScavOne - Health: " << scavOne.getTypeHit() << ", Energy: " << scavOne.getTypeEneryg() << ", Attack Power: " << scavOne.getTypeDamage() << std::endl;
std::cout << "FragOne - Health: " << fragOne.getTypeHit() << ", Energy: " << fragOne.getTypeEneryg() << ", Attack Power: " << fragOne.getTypeDamage() << std::endl;

std::cout << "\n-------------------------------------------- Function Tests --------------------------------------------\n" << std::endl;

clapOne.attack("-target1-");
scavOne.takeDamage(1);
scavOne.beRepaired(5);

scavOne.attack("-target2");
fragOne.takeDamage(1);
fragOne.beRepaired(10);

scavOne.guardGate();

fragOne.attack("-target3-");
clapOne.takeDamage(100);
clapOne.beRepaired(15);

fragOne.highFivesGuys();

std::cout << "\n-------------------------------------------- After State --------------------------------------------\n" << std::endl;

std::cout << "ClapOne - Health: " << clapOne.getTypeHit() << ", Energy: " << clapOne.getTypeEneryg() << ", Attack Power: " << clapOne.getTypeDamage() << std::endl;
std::cout << "ScavOne - Health: " << scavOne.getTypeHit() << ", Energy: " << scavOne.getTypeEneryg() << ", Attack Power: " << scavOne.getTypeDamage() << std::endl;
std::cout << "FragOne - Health: " << fragOne.getTypeHit() << ", Energy: " << fragOne.getTypeEneryg() << ", Attack Power: " << fragOne.getTypeDamage() << std::endl << std::endl;

	return 0;
}
