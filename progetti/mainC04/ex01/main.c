/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossign <arossign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:31:36 by arossign          #+#    #+#             */
/*   Updated: 2021/10/03 14:35:15 by arossign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr(char *str);

int		main(void)
{
	char *str;

	str = "Hello World";
	printf("string is: %s\n",str);
	printf("Your function: \n");
	ft_putstr(str);
	printf("\n");
}
