/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:01:05 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/26 11:22:53 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	n;

	if (min >= max)
		return (NULL);
	i = (int *)malloc(sizeof(int) * (max - min));
	n = 0;
	while (min < max)
	{
		i[n++] = min++;
	}
	return (i);
}
