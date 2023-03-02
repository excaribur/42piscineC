/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:28:30 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/25 12:28:13 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(src);
	ptr = (char *)malloc(sizeof(char) * (n+1));
	if (ptr == NULL)
		return ("\0");
	while (src[i] != 0)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
