/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:19:44 by musozer           #+#    #+#             */
/*   Updated: 2024/11/05 16:30:50 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{

    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");

    std::cout << "\n------------------------------------- Initial State -------------------------------------\n" << std::endl;

    std::cout << "ClapOne Health: " << clap1.getTypeHit() << ", Energy: " << clap1.getTypeEneryg() << ", Attack Power: " << clap1.getTypeDamage() << std::endl;
    std::cout << "ClapTwo Health: " << clap2.getTypeHit() << ", Energy: " << clap2.getTypeEneryg() << ", Attack Power: " << clap2.getTypeDamage() << std::endl;

    std::cout << "\n------------------------------------- Set Functions Test -------------------------------------\n" << std::endl;

    clap1.setTypeHit(20);
    clap1.setTypeEneryg(5);
    clap1.setTypeDamage(5);
    std::cout << "\nClapOne New Health: " << clap1.getTypeHit() << ", New Energy: " << clap1.getTypeEneryg() << ", New Attack Power: " << clap1.getTypeDamage() << std::endl;

    std::cout << "\n------------------------------------- Attack Tests -------------------------------------\n" << std::endl;

    clap1.attack("-target1-");
    clap2.takeDamage(5);
    clap2.attack("-target2-");
    clap1.takeDamage(3);

    std::cout << "\n------------------------------------- Energy Test -------------------------------------\n" << std::endl;

    std::cout << "ClapOne Health: " << clap1.getTypeHit() << ", Energy: " << clap1.getTypeEneryg() << ", Attack Power: " << clap1.getTypeDamage() << std::endl;
    std::cout << "ClapTwo Health: " << clap2.getTypeHit() << ", Energy: " << clap2.getTypeEneryg() << ", Attack Power: " << clap2.getTypeDamage() << std::endl << std::endl;
    for (int i = 0; i < 6; ++i) {
        clap1.attack("-target1-");
    }

    std::cout << "\n------------------------------------- Health Test -------------------------------------\n" << std::endl;

    clap2.takeDamage(100);
    clap2.attack("ClapOne");

    std::cout << "\n------------------------------------- Set Functions Test -------------------------------------\n" << std::endl;

    std::cout << "ClapOne Health: " << clap1.getTypeHit() << ", Energy: " << clap1.getTypeEneryg() << ", Attack Power: " << clap1.getTypeDamage() << std::endl << std::endl;
    clap1.setTypeHit(20);
    clap1.setTypeEneryg(5);
    clap1.setTypeDamage(5);

    std::cout << "\n------------------------------------- Repair Tests -------------------------------------\n" << std::endl;

    clap1.beRepaired(5);
    clap2.beRepaired(10);

    std::cout << "\n------------------------------------- Final State -------------------------------------\n" << std::endl;

    std::cout << "ClapOne Health: " << clap1.getTypeHit() << ", Energy: " << clap1.getTypeEneryg() << ", Attack Power: " << clap1.getTypeDamage() << std::endl;
    std::cout << "ClapTwo Health: " << clap2.getTypeHit() << ", Energy: " << clap2.getTypeEneryg() << ", Attack Power: " << clap2.getTypeDamage() << std::endl << std::endl;

	return 0;
}

