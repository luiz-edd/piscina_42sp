/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:47:44 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 17:46:34 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;
	int		aux1;
	int		aux2;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			write(1, "\\", 1);
			aux1 = (unsigned char)str[i] / 16;
			aux2 = (unsigned char)str[i] % 16;
			write(1, &hex[aux1], 1);
			write(1, &hex[aux2], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char str[] = {'a', 130, '\n'};
// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// 	return (0);
// }
// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// }