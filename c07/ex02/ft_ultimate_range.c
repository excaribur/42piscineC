/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:14:57 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/27 19:04:05 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*take;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	take = (int *)malloc(sizeof(range) * (max - min));
	if (take == NULL)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min < max)
		take[i++] = min++;
	*range = take;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	*array_int;
	int	size;
	int	min = -5;
	int	max = -6;

	size = ft_ultimate_range(&array_int, min, max);
	printf("min:%d |max:%d |size:%d\n",min, max,size);
	if(array_int == NULL)
		printf("null\n");
	for (int i = 0; i < (max - min + 1); i++)
	{
		printf("%d\n", array_int[i]);
	}
	free(array_int);
}
*/
