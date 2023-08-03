/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:22:58 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:24:09 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[0];
	while (c)
	{
		if (c >= 'a' && c <= 'z')
		{
			str[i] -= 32;
		}
		i++;
		c = str[i];
	}
	return (str);
}

// int	main(void)
// {
// 	char c[5] = "0bCdE";

// 	printf("%s", ft_strupcase(c));
// }