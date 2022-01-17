/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossign <arossign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:31:55 by arossign          #+#    #+#             */
/*   Updated: 2021/10/03 14:40:19 by arossign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr(int nb);

int		main(void)
{
	printf(" <- Your function");
	ft_putnbr(42);
	printf(", result expected -> 42\n");
	printf("\n <- Your function");
	ft_putnbr(4242);
	printf(", result expected -> 4242\n");
	printf("\n <- Your function");
	ft_putnbr(20000706);
	printf(", result expected -> 20000706\n");
	printf("\n <- Your function");
	ft_putnbr(+2147483647);
	printf(", result expected -> 2147483647\n");
	printf("\n <- Your function");
	ft_putnbr(-2147483648);
	printf(", result expected -> -2147483648\n");
	printf("\n");
}
