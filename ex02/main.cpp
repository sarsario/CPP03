/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:51:09 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 14:51:17 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap *frag = new FragTrap("Frag");
	FragTrap *frag2 = new FragTrap("Frag2");

	frag->attack("Frag2");
	frag2->takeDamage(30);
	frag2->beRepaired(20);
	frag2->attack("Frag");
	frag->takeDamage(30);
	frag->beRepaired(20);
	frag->highFivesGuys();
	delete frag;
	delete frag2;
	return (0);
}
