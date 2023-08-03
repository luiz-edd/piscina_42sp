/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:22:41 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/11 14:20:39 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	i;
	int unsigned	j;

	i = 0;
	j = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[10] = "aaa";
// 	char src[4] = "bbb";
// 	int nb = 2;

// 	printf("%s", ft_strncat(dest, src, nb));
// }
////revisado