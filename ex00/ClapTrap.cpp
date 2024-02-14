/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:34 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 12:36:46 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors and destructors

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10),
						   _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
									   _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return;
}

// Copy constructor

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

// Actions

void ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!"
				  << std::endl;
		return;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of hit points!"
				  << std::endl;
		return;
	}
	this->_energyPoints -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target
			  << ", causing " << this->_attackDamage << " points of damage!"
			  << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap's corpse " << this->_name << " takes "
				  << amount << " points of damage!" << std::endl;
		return;
	}
	this->_hitPoints = amount > this->_hitPoints ? 0 : this->_hitPoints - amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount
			  << " points of damage!" << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is beyond repair!"
				  << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!"
				  << std::endl;
		return;
	}
	this->_hitPoints = amount + this->_hitPoints > 10 ? 10 : this->_hitPoints + amount;
	std::cout << "ClapTrap " << this->_name << " is repaired for "
			  << amount << " points!" << std::endl;
	return;
}
