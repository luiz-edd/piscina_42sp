/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:52:50 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/10 10:17:08 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	// char teste;
// 	s1 = "aaaa";
// 	s2 = "aaab";
// 	printf("%i", ft_strncmp(s1, s2, 0));
// 	// printf("%i", ft_strncmp(s1, s2, 0));
// }
//revisado