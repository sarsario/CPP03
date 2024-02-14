/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:27:44 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 15:12:17 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{

public:
	// Constructors and destructors
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);

	// Assignment operator
	ClapTrap &operator=(ClapTrap const &rhs);

	// Actions
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};

#endif