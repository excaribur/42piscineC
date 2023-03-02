/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrukhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:11:42 by mtrukhin          #+#    #+#             */
/*   Updated: 2022/10/09 22:51:36 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printb(int n)
{
	while (n > 0)
	{
		ft_putchar('B');
		n--;
	}
}

void	newl(void)
{
	ft_putchar('\n');
}

void	first_last_line(int x)
{
	ft_putchar('A');
	if (x > 1)
	{
		printb(x - 2);
		ft_putchar('C');
	}
	newl();
}

void	body_lines(int x, int y)
{
	int	xi;
	int	yi;

	xi = 0;
	yi = 0;
	while (y - 2 > yi)
	{
		ft_putchar('B');
		xi = 0;
		while (xi < x - 2)
		{
			ft_putchar(' ');
			xi++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		newl();
		yi++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	first_last_line(x);
	body_lines(x, y);
	if (y > 1)
	{
		first_last_line(x);
	}
}
