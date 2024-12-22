/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:20:17 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 15:28:14 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Default") {
	this->hit = 10;
    this->energy = 10;
    this->damage = 0;
	std::cout << "\033[1;102mClapTrap " << this->name << " default created!\033[0m" << std::endl;
}


ClapTrap::ClapTrap(const std::string& name){
	this->name = name;
    this->hit = 10;
    this->energy = 10;
    this->damage = 0;
    std::cout << "\033[1;103mClapTrap " << this->name << " created!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& n){
	this->name = n.name;
	this->hit = n.hit;
	this->energy = n.energy;
	this->damage = n.damage;
	std::cout << "\033[1;105mClapTrap " << this->name << " copy constructor called!\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& n){
	if (this != &n){
		this->name = n.name;
		this->hit = n.hit;
		this->energy = n.energy;
		this->damage = n.damage;
    std::cout << "\033[1;106mClapTrap " << this->name << " assignment operator called!\033[0m" << std::endl;

	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this-> hit == 0 || this-> energy == 0)
		std::cout << "❌ \033[1;31mClapTrap " << this->name << " can't attack because he has no energy and no hit points!\033[0m ❌" << std::endl;
	else if (this-> damage == 0)
		std::cout << "❌ \033[1;31mClapTrap " << this->name << " cannot attack because his damage is '0'!\033[0m ❌" << std::endl;
	else{
		this->energy--;
        std::cout << "🔫 \033[1;36mClapTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!\033[0m 🔫" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hit == 0){
		std::cout << "💀 \033[1;31mClapTrap " << this->name << " is dead! \033[0m 💀" << std::endl;
		return ;
	}
	else if (this->hit <= amount){
		this->hit = 0;
		std::cout << "🤕 \033[1;35mClapTrap " << this->name << " takes " << amount << " points of damage!\033[0m 🤕" << std::endl;
		std::cout << "💀 \033[1;31mClapTrap " << this->name << " died because had " << this->hit << " hit points left!\033[0m 💀" << std::endl;
	}
	else if (this->hit > amount){
		this->hit -= amount;
		std::cout << "🤕 \033[1;35mClapTrap " << this->name << " takes " << amount << " points of damage!\033[0m 🤕" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this-> hit == 0 || this-> energy == 0)
		std::cout << "❌ \033[1;31mClapTrap " << this->name << "  can't repaired because he has no energy and no hit points!\033[0m ❌" << std::endl;
	else
	{
		this->energy--;
        this->hit += amount;
        std::cout << "❤️‍🩹 \033[1;32mClapTrap " << this->name << " repairs itself, recovering " << amount << " hit points!\033[0m ❤️‍🩹" << std::endl;
    }
}

void ClapTrap::setTypeHit(unsigned int hit){
	this->hit = hit;
	std::cout << "🆕\033[1;92mClapTrap " << this->name << " hit point has been updated to '" << this->hit << "'!\033[0m🆕" << std::endl;
}

void ClapTrap::setTypeEneryg(unsigned int energy){
    this->energy = energy;
	std::cout << "🆕\033[1;92mClapTrap " << this->name << " energy point has been updated to '" << this->energy << "'!\033[0m🆕" << std::endl;

}

void ClapTrap::setTypeDamage(unsigned int damage){
    this->damage = damage;
	std::cout << "🆕\033[1;92mClapTrap " << this->name << " attack damage has been updated to '" << this->damage << "'!\033[0m🆕" << std::endl;

}

unsigned int ClapTrap::getTypeHit(void){
    return this->hit;
}

unsigned int ClapTrap::getTypeEneryg(void){
    return this->energy;
}

unsigned int ClapTrap::getTypeDamage(void){
    return this->damage;
}

ClapTrap::~ClapTrap(){
	std::cout << "\033[1;101mClapTrap " << this->name << " destroyed!\033[0m" << std::endl;

}
