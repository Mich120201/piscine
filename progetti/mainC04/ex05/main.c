/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossign <arossign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:33:43 by arossign          #+#    #+#             */
/*   Updated: 2021/10/03 14:33:44 by arossign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int		main(void)
{
	printf("input number : -123456, base \"0123456789\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-123456", "0123456789"));
	printf("Real Answer : -123456\n");
	fflush(stdout);
	printf("input number : 11110001001000000, base \"01\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("11110001001000000", "01"));
	printf("Real Answer : 123456\n");
	fflush(stdout);
	printf("input number : -1e240, base \"0123456789abcdef\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	printf("Real Answer : -123456\n");
	fflush(stdout);
}
