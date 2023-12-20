/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:53:39 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 14:41:51 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap *scav1 = new ScavTrap("Scav1");
	ScavTrap scav2("Scav2");
	ScavTrap scav3(*scav1);
	ScavTrap scav4 = *scav1;

	scav1->attack("Scav2");
	scav2.takeDamage(20);
	scav2.beRepaired(10);
	scav1->guardGate();
	delete scav1;
	scav3.guardGate();
	scav4.guardGate();
	return (0);
}
