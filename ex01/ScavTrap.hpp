/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:45:03 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 14:14:12 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	// Constructors and destructors
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	// Copy constructor
	ScavTrap &operator=(ScavTrap const &rhs);

	// Actions
	void guardGate(void);
	void attack(std::string const &target);
};

#endif
