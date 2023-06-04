/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:08:50 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/04 11:12:43 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_att_arr(int *tab, int lower_index, int i)
{
	int	aux;

	aux = 0;
	aux = tab[i];
	tab[i] = tab[lower_index];
	tab[lower_index] = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	lower_index;

	i = 0;
	j = 0;
	lower_index = 0;
	while (i < size)
	{
		j = i + 1;
		lower_index = i;
		while (j < size)
		{
			if (tab[lower_index] > tab[j])
			{
				lower_index = j;
			}
			j++;
		}
		ft_att_arr(&tab[0], lower_index, i);
		i++;
	}
}

// int	main(void)
// {
// 	int	i;

// 	int	array[8] = {2147483647, 43, 'a', 15, -2, 3, 2, -2147483648};
// 	i = 0;
// 	while (i < 8)
// 	{
// 		printf("%i ", array[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\n");
// 	ft_sort_int_tab(&array[0], 8);
// 	while (i < 8)
// 	{
// 		printf("%i ", array[i]);
// 		i++;
// 	}
// }