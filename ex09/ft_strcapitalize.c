/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:33:33 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:28:12 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' \
					&& str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i \
					- 1] <= '9')))
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char string[] = " Salut, coMment tu zs+et+un";
	printf("%s", ft_strcapitalize(string));
}  */