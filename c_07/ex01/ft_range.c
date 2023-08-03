/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:32:06 by leduard2          #+#    #+#             */
/*   Updated: 2023/06/15 12:52:18 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		return ((void *)0);
	}
	i = 0;
	arr = malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

#include <stdio.h>

int	main(void)
{
	int i;
	int range;
	range = 10 - 1;
	i = 0;

	int *arr = ft_range(1, 10);
	while (range > 0)
	{
		printf("%d ", arr[i]);
		i++;
		range--;
	}
}