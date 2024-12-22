/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:19:44 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 16:10:42 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){

std::cout << "\n-------------------------------------------- Initial State --------------------------------------------\n" << std::endl;
ClapTrap clapOne("ClapOne");
ClapTrap clapTwo("ClapTwo");
ScavTrap scavOne("ScavOne");
ScavTrap scavTwo("ScavTwo");

std::cout << std::endl;
std::cout << "ClapOne Health: " << clapOne.getTypeHit() << ", Energy: " << clapOne.getTypeEneryg() << ", Attack Power: " << clapOne.getTypeDamage() << std::endl;
std::cout << "ClapTwo Health: " << clapTwo.getTypeHit() << ", Energy: " << clapTwo.getTypeEneryg() << ", Attack Power: " << clapTwo.getTypeDamage() << std::endl;
std::cout << "ScavOne Health: " << scavOne.getTypeHit() << ", Energy: " << scavOne.getTypeEneryg() << ", Attack Power: " << scavOne.getTypeDamage() << std::endl;
std::cout << "ScavTwo Health: " << scavTwo.getTypeHit() << ", Energy: " << scavTwo.getTypeEneryg() << ", Attack Power: " << scavTwo.getTypeDamage() << std::endl;

std::cout << "\n-------------------------------------------- Function Tests --------------------------------------------\n" << std::endl;

clapOne.attack("-target1-");
clapTwo.takeDamage(5);
clapTwo.beRepaired(5);

scavOne.attack("-target2-");
scavTwo.takeDamage(100);
scavTwo.beRepaired(10);

scavOne.guardGate();

std::cout << "\n-------------------------------------------- After State --------------------------------------------\n" << std::endl;

std::cout << "ClapOne Health: " << clapOne.getTypeHit() << ", Energy: " << clapOne.getTypeEneryg() << ", Attack Power: " << clapOne.getTypeDamage() << std::endl;
std::cout << "ClapTwo Health: " << clapTwo.getTypeHit() << ", Energy: " << clapTwo.getTypeEneryg() << ", Attack Power: " << clapTwo.getTypeDamage() << std::endl;
std::cout << "ScavOne Health: " << scavOne.getTypeHit() << ", Energy: " << scavOne.getTypeEneryg() << ", Attack Power: " << scavOne.getTypeDamage() << std::endl;
std::cout << "ScavTwo Health: " << scavTwo.getTypeHit() << ", Energy: " << scavTwo.getTypeEneryg() << ", Attack Power: " << scavTwo.getTypeDamage() << std::endl << std::endl;

    return 0;
}

