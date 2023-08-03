/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:03:32 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/04 11:10:13 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (size > i)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		size--;
		i++;
	}
}

// int	main(void)
// {
// 	int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
// 18, 19, 20};
// 	int i;
// 	i = 0;

// 	while (i < 20)
// 	{
// 		printf("%i ", array[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\n");
// 	ft_rev_int_tab(&array[0], 20);

// 	while (i < 20)
// 	{
// 		printf("%i ", array[i]);
// 		i++;
// 	}
// }