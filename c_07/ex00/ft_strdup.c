/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:06:59 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/15 16:41:07 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str_new;

	str_new = malloc(sizeof(char) * ft_strlen(src));
	if (str_new == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(str_new, src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strdup("alou"));
// }