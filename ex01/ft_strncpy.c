/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:59:12 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:31:11 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char dest[5] = "abcd";
// 	char *res;
// 	int i;

// 	i = 0;
// 	src = "0123456789";
// 	res = ft_strncpy(dest, src, 0);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", res);
// 	while (res[i])
// 	{
// 		printf("%i\n",dest[i]);
// 		i++;
// 	}
// 	printf("%i\n",dest[i] );

// 	return (0);
// }