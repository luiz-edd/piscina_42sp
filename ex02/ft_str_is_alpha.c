/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:03:33 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:23:20 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
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
// 	c = "dsadsadsadsa0dsadsadsad";
// 	printf("%d", ft_str_is_alpha(c));
// }