/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:26:26 by mvolpi            #+#    #+#             */
/*   Updated: 2021/10/17 09:25:28 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	int		index;
	char	curr;
	bool	valid;

	index = 0;
	valid = true;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= '0' && curr <= '9'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
