/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:26:36 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 16:28:58 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{

	std::cout << "-------------------------------------------- Initial State --------------------------------------------\n" << std::endl;
	ClapTrap clapOne("ClapOne");
	ScavTrap scavOne("ScavOne");
	FragTrap fragOne("FragOne");
	DiamondTrap diamondOne("DiamondOne");

	std::cout << "ClapOne - Health: " << clapOne.getTypeHit() << ", Energy: " << clapOne.getTypeEneryg() << ", Attack Power: " << clapOne.getTypeDamage() << std::endl;
	std::cout << "ScavOne - Health: " << scavOne.getTypeHit() << ", Energy: " << scavOne.getTypeEneryg() << ", Attack Power: " << scavOne.getTypeDamage() << std::endl;
	std::cout << "FragOne - Health: " << fragOne.getTypeHit() << ", Energy: " << fragOne.getTypeEneryg() << ", Attack Power: " << fragOne.getTypeDamage() << std::endl;
	std::cout << "DiamondOne - Health: " << diamondOne.getTypeHit() << ", Energy: " << diamondOne.getTypeEneryg() << ", Attack Power: " << diamondOne.getTypeDamage() << std::endl;

	std::cout << "\n-------------------------------------------- Function Tests --------------------------------------------\n" << std::endl;

	clapOne.attack("-target1-");
	scavOne.takeDamage(5);
	scavOne.beRepaired(5);

	scavOne.attack("-target2-");
	fragOne.takeDamage(5);
	fragOne.beRepaired(10);

	scavOne.guardGate();

	fragOne.attack("-target3-");
	clapOne.takeDamage(3);
	clapOne.beRepaired(15);

	fragOne.highFivesGuys();

	diamondOne.attack("-target4-");
	clapOne.takeDamage(100);

	diamondOne.whoAmI();

	std::cout << "\n-------------------------------------------- Post-State --------------------------------------------\n" << std::endl;

	// Print Final States
	std::cout << "ClapOne - Health: " << clapOne.getTypeHit() << ", Energy: " << clapOne.getTypeEneryg() << ", Attack Power: " << clapOne.getTypeDamage() << std::endl;
	std::cout << "ScavOne - Health: " << scavOne.getTypeHit() << ", Energy: " << scavOne.getTypeEneryg() << ", Attack Power: " << scavOne.getTypeDamage() << std::endl;
	std::cout << "FragOne - Health: " << fragOne.getTypeHit() << ", Energy: " << fragOne.getTypeEneryg() << ", Attack Power: " << fragOne.getTypeDamage() << std::endl;
	std::cout << "DiamondOne - Health: " << diamondOne.getTypeHit() << ", Energy: " << diamondOne.getTypeEneryg() << ", Attack Power: " << diamondOne.getTypeDamage() << std::endl << std::endl;

    return 0;

}
