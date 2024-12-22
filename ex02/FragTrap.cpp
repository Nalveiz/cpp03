/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:51:52 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 15:56:20 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	this->hit = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "\033[1;34mmFragTrap " << this->name << " default created!\033[0m" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	this->hit = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "\033[1;34mFragTrap " << this->name << " created!\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& n) : ClapTrap(n) {
	this->name = n.name;
	this->hit = n.hit;
	this->energy = n.energy;
	this->damage = n.damage;
    std::cout << "\033[1;34mFragTrap " << this->name << " copy constructor called!\033[0m" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& n) {
	if (this != &n)
	{
        ClapTrap::operator=(n);
		this->name = n.name;
		this->hit = n.hit;
		this->energy = n.energy;
		this->damage = n.damage;
    }
    std::cout << "\033[1;34mFragTrap " << this->name << " assignment operator called!\033[0m" << std::endl;
	return *this;
}
void FragTrap::highFivesGuys(){
	std::cout << "🥳🥳🥳 \033[1;36mFragTrap " << this->name << " requests high fives!\033[0m 🥳🥳🥳" << std::endl;
}
FragTrap::~FragTrap(){
	std::cout << "\033[1;106mFragTrap " << this->name << " destroyed!\033[0m" << std::endl;
}
