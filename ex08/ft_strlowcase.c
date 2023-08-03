/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:20:46 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:24:18 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[0];
	while (c)
	{
		if (c >= 'A' && c <= 'Z')
		{
			str[i] += 32;
		}
		i++;
		c = str[i];
	}
	return (str);
}

// int	main(void)
// {
// 	char c[7] = "0bCdEF2";

// 	printf("%s", ft_strlowcase(c));
// }