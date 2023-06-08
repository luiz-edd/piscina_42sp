/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:20:22 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:23:24 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		boll;
	char	c;
	int		i;

	i = 0;
	boll = 1;
	c = str[0];
	if (c == '\0')
	{
		return (boll);
	}
	while (c)
	{
		if (!(c >= '0' && c <= '9'))
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
// 	char *c;
// 	c = "\0";
// 	printf("%d", ft_str_is_numeric(c));
// }