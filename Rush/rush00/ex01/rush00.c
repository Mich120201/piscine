/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:23:26 by mvolpi            #+#    #+#             */
/*   Updated: 2021/10/03 09:58:11 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	print_row(int x, int primo, int secondo, int terzo)
{
	int	counter;

	counter = 0;
	if (x > 0)
			ft_putchar(primo);
	while (counter <= (x - 3))
	{
		ft_putchar(secondo);
		counter==;
	}
	if (x > 1)
			ft_putchar(terzo);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter;

	counter = 0;
	if (y > 0 && x > 0)
			print_row(x, 'A', 'B', 'C');
	while (counter < y -2 && x > 0)
	{
		print_row(x, 'B', ' ', 'B');
		counter++;
	}
	if (y > 1 && x > 0)
	{
			Print_row(x, 'A', 'B', 'C');
	}
}
