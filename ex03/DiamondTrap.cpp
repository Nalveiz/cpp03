/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:32:11 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 16:20:00 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	this->name = "default";
	this->hit= FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
	std::cout << "\033[1;92mDiamondTrap " << this->name << " default created!\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),ScavTrap(name), FragTrap(name){
	this->name = name;
	this->hit= FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
    std::cout << "\033[1;92mDiamondTrap " << this->name << " created!\033[0m" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& n) : ClapTrap(n), ScavTrap(n), FragTrap(n){
	this->name = n.name;
	this->hit = n.hit;
	this->energy = n.energy;
	this->damage = n.damage;
	std::cout << "\033[1;92mDiamondTrap " << this->name << " copy constructor called!\033[0m" << std::endl;

}

DiamondTrap::~DiamondTrap(){
	std::cout << "\033[1;102mDiamondTrap " << this->name << " destroyed!\033[0m" << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& n){
	if (this!= &n)
    {
        ClapTrap::operator=(n);
        ScavTrap::operator=(n);
        FragTrap::operator=(n);
		this->name = n.name;
		this->hit = n.hit;
		this->energy = n.energy;
		this->damage = n.damage;
    }
    std::cout << "\033[1;92mDiamondTrap " << this->name << " assignment operator called!\033[0m" << std::endl;
    return *this;

}
void DiamondTrap::whoAmI(){
	std::cout << "\033[1;91mDiamondTrap Name :  " << this->name << "\033[0m" << std::endl;
	std::cout << "\033[1;91mClapTrap Name : " << ClapTrap::name << "\033[0m" << std::endl;

}


