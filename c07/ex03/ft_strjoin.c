/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:22:42 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/27 11:43:16 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	len_arr(int size, char **strs)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < size)
		sum += len(strs[i++]);
	return (sum);
}

char	*join(char *temp, char *str)
{
	char	*rest;

	rest = temp;
	while (*temp)
		temp++;
	while (*str)
	{
		*temp++ = *str++;
	}
	*temp = '\0';
	return (rest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*temp;
	char	*temp2;
	int		n;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	n = len_arr(size, strs);
	n = n + (len(sep) * (size - 1)) + 1;
	temp = (char *)malloc(sizeof(char) * n);
	if (temp == NULL)
		return (0);
	temp2 = temp;
	i = 0;
	while (i < size)
	{
		temp = join(temp, strs[i++]);
		if (i < size)
			temp = join(temp, sep);
	}
	temp[n] = '\0';
	return (temp2);
}
