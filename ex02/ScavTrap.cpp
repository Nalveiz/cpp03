/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:36:03 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 15:53:50 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	this->hit = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "\033[1;35mScavTrap " << this->name << " default created!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	this->hit = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "\033[1;35mScavTrap " << this->name << " created!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& n) : ClapTrap(n) {
    std::cout << "\033[1;35mScavTrap " << this->name << " copy constructor called!\033[0m" << std::endl;
	this->name = n.name;
	this->hit = n.hit;
	this->energy = n.energy;
	this->damage = n.damage;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& n){
	if (this != &n)
	{
		ClapTrap::operator=(n);
		this->name = n.name;
		this->hit = n.hit;
		this->energy = n.energy;
		this->damage = n.damage;
	}
    std::cout << "\033[1;35mScavTrap " << this->name << " assignment operator called!\033[0m" << std::endl;
	return *this;
}

void ScavTrap::guardGate(){
	std::cout << "\033[1;94mScavTrap " << this->name << " is now in Gatekeeper mode!\033[0m" << std::endl;
}

void ScavTrap::attack(const std::string& name){
	if (this-> hit == 0 || this-> energy == 0)
		std::cout << "❌ \033[1;91mScavTrap " << this->name << " can't attack because he has no energy and no hit points!\033[0m ❌" << std::endl;
	else if (this-> damage == 0)
		std::cout << "❌ \033[1;91mScavTrap " << this->name << " cannot attack because his damage is '0'!\033[0m ❌" << std::endl;
	else{
		this->energy--;
		std::cout << "🔫 \033[1;36mScavTrap " << this->name << " unleashes a powerful attack on "
        	  << name << ", causing " << this->damage << " damage points! 🔫 \033[0m" << std::endl;
	}
}

ScavTrap::~ScavTrap(){
	std::cout << "\033[1;105mScavTrap " << this->name << " destroyed!\033[0m" << std::endl;

}
