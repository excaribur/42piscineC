/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:53:39 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/09 12:06:09 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
{
	char	d0;
	char	d1;

	d0 = '0' + i % 10;
	d1 = '0' + i / 10;
	write(1, &d1, 1);
	write(1, &d0, 1);
}

void	space(void)
{
	write(1, " ", 1);
}

void	comma(void)
{
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{	
		b = a + 1;
		while (b < 100)
		{
			print(a);
			space();
			print(b);
			if (a != 98 || b != 99)
			{
				comma();
			}
				b++;
		}
		a++;
	}
}
