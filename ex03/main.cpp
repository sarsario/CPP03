/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:18:35 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 08:18:45 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap *diamond = new DiamondTrap("Diamond");
	diamond->whoAmI();
	diamond->attack("target");
	delete diamond;
	return (0);
}
