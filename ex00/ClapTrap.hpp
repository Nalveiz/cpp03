/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:20:20 by musozer           #+#    #+#             */
/*   Updated: 2024/10/21 20:09:51 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		unsigned int  hit;
		unsigned int energy;
		unsigned int damage;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		~ClapTrap();
		ClapTrap(const ClapTrap& n);
		ClapTrap& operator=(const ClapTrap& n);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setTypeHit(unsigned int hit);
		void setTypeEneryg(unsigned int energy);
		void setTypeDamage(unsigned int damage);
		unsigned int getTypeHit(void);
		unsigned int getTypeEneryg(void);
		unsigned int getTypeDamage(void);

};

#endif
