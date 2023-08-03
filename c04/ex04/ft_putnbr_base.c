/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:49:32 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/14 09:13:08 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base_logic(long nb, char *base, int base_len)
{
	if (nb >= base_len)
		ft_putnbr_base_logic((nb / base_len), base, base_len);
	write(1, &base[nb % base_len], 1);
}

int	ft_validate_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str_len(str) < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (ft_validate_base(base))
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		ft_putnbr_base_logic(nb, base, str_len(base));
	}
}

// int	main(void)
// {
// 	char	*base;
// 	base = "0123456789abcdef";
// 	if (ft_validate_base(base))
// 	{
// 		write(1, "valid\n", 6);
// 	}
// 	else
// 	{
// 		write(1, "unvalid\n", 8);
// 	}
// 	ft_putnbr_base(-16, base);
// }