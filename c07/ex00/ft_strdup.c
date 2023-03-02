/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:54:46 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/18 15:22:14 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;
	int		i;

	i = 0;
	n = len(src) + 1;
	ptr = (char *)malloc(sizeof(char) * n);
	if (ptr == NULL)
		return ("\0");
	while (i < n)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
