/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:24:09 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/07 18:50:43 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		boll;
	char	c;
	int		i;

	boll = 1;
	i = 0;
	c = str[0];
	if (c == '\0')
	{
		return (boll);
	}
	while (c)
	{
		if (!(c >= ' ' && c <= '~'))
		{
			boll = 0;
		}
		i++;
		c = str[i];
	}
	return (boll);
}

// int	main(void)
// {
// 	char	c;

// 	c = 127;
// 	printf("%d", ft_str_is_printable(&c));
// }
