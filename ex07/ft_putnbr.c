/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:48:03 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 19:30:05 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_any_int_to_char(int num)
{
	if (num > 9)
	{
		ft_any_int_to_char(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
	{
		ft_putchar(num % 10 + '0');
	}
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		ft_any_int_to_char(num);
	}
	else if (num == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		ft_any_int_to_char(num);
	}
}

// int	main(void)
// {
// 	ft_putnbr(01234);
// }