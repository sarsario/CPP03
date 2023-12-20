/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:38:28 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 12:38:33 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2("Claptrap2");

	claptrap.attack("Handsome Jack");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap2.attack("Handsome Jack");
	claptrap2.takeDamage(5);
	claptrap2.beRepaired(5);
	return (0);
}
