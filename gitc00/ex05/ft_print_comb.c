/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:09:22 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/09 12:43:02 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char i, char j, char k)
{
	if (i != j && j != k && k != i)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		if (i != '7' || j != '8' || k != '9')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '0';
	k = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
