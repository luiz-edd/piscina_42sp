/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:02:26 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 18:44:25 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int num)
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
