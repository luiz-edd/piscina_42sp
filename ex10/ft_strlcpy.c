/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:38:46 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:40:17 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size == 0)
		return (src_len);
	len = 0;
	while (src[len] && --size)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	int size;
// 	char *src;
// 	src = "abc";
// 	// char src[0];
// 	char dest[10] = "01234";
// 	// char dest[0];
// 	// printf("%s", dest);
// 	size = 2;
// 	// dest = (char *)malloc(sizeof(char) * 5);
// 	printf("new array size: %i \n", ft_strlcpy(dest, src, size));
// 	printf("new array content: %s\n", dest);
// 	// printf("src array content: %s", src);
// }