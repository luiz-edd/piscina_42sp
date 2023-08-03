/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:44:10 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/08 18:50:37 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_int_to_char(int i, int j)
{
	char	num1char1;
	char	num1char2;
	char	num2char1;
	char	num2char2;

	num1char1 = i / 10 + '0';
	num1char2 = i % 10 + '0';
	num2char1 = j / 10 + '0';
	num2char2 = j % 10 + '0';
	write(1, &num1char1, 1);
	write(1, &num1char2, 1);
	write(1, " ", 1);
	write(1, &num2char1, 1);
	write(1, &num2char2, 1);
	if (num2char1 == '9' && num2char2 == '9' && num1char1 == '9'
		&& num1char2 == '8')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_int_to_char(num1, num2);
			num2++;
		}
		num1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }