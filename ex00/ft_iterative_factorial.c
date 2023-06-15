/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:03:15 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/15 09:40:15 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (sum > 1)
	{
		sum -= 1;
		nb = nb * sum;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(12));
// }
//revisado