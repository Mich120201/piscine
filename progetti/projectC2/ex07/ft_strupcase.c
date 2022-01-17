/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:29:30 by mvolpi            #+#    #+#             */
/*   Updated: 2021/10/12 15:48:20 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char	*ft_strupcase(char *str)
{
	int		i;
	int		len;
	char	*temp;

	temp = str;
	i = 0;
	len = ft_len(str);
	while (i < len)
	{
		if ('z' >= str[i] && 'a' <= str[i])
			str[i] -= 32;
		i++;
	}
	return (temp);
}
