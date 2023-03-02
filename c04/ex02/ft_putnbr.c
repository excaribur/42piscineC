/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:23:18 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/12 12:42:55 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
{
	char	c;

	if (i == 0)
	{
		return ;
	}
	c = '0' + i % 10;
	i = i / 10;
	print(i);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb > 0)
	{
		print(nb);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		print(nb);
	}
	else
	{
		write(1, "0", 1);
	}
}
