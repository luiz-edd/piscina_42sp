/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:02:47 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/04 10:57:33 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = (a / b);
		*mod = a % b;
	}
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 5;
// 	b = 2;
// 	div = 0;
// 	mod = 0;

// 	printf(" *div:%i", div);
// 	printf(" *mod:%i\n", mod);

// 	ft_div_mod(a, b, &div, &mod);

// 	printf(" *div:%i", div);
// 	printf(" *mod:%i\n", mod);
// }
