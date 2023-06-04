/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:29:36 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/04 11:00:16 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	if (*b)
	{
		aux_a = (*a / *b);
		aux_b = (*a % *b);
		*a = aux_a;
		*b = aux_b;
	}
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 0;
// 	b = 5;
// 	printf(" a:%i", a);
// 	printf(" b:%i\n", b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf(" a:%i", a);
// 	printf(" b:%i", b);
// }