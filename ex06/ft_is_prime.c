/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:47:18 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/14 18:14:33 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb < 2)
		return (0);
	n = 3;
	while (n <= nb / n)
	{
		if (nb % n == 0)
			return (0);
		n += 2;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	while (i <= 1000)
// 	{
// 		if (ft_is_prime(i))
// 		{
// 			printf("%d is prime\n", i);
// 		}
// 		// else
// 		// {
// 		// 	printf("%d is NOT prime\n", i);
// 		// }
// 		i++;
// 	}
// 	// printf("%d\n", ft_is_prime(2147483647));
// }
//revisado