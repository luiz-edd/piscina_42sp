/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:05:48 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/12 11:12:21 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_length(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	int				total_len;

	i = ft_str_length(dest);
	j = 0;
	total_len = ft_str_length(dest) + ft_str_length(src);
	if (size > i)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
		return (total_len);
	}
	return (ft_str_length(src) + size);
}

// int	main(void)
// {
// 	char *src = "01234";
// 	char dest[10] = "abcde";
// 	int size = 10;
// 	printf("return: %i\n", ft_strlcat(dest, src, size));
// 	printf("dest new content %s\n", dest);
// }
//// revisado