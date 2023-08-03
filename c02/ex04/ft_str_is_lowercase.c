/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:20:27 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:23:28 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		boll;
	char	c;
	int		i;

	i = 0;
	c = str[0];
	boll = 1;
	if (c == '\0')
	{
		return (boll);
	}
	while (c)
	{
		if (!(c >= 'a' && c <= 'z'))
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
// 	c = "a0";
// 	printf("%d", ft_str_is_lowercase(c));
// }