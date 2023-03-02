/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:51:09 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/07 16:27:36 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
{
	char	d0;

	d0 = '0' + i;
	write(1, &d0, 1);
}

void	comma(void)
{
	write(1, ", ", 2);
}

void	ft_print_comn(int n)
{
	int	a;
	int	b;

	n = 10 ^ n;
	a = 0;
	b = 0;
	while (a < n)
	{
		print(a);
		b = a + 1;
		while (b < n)
		{
			print(b);
			comma();
			b++;
		}
		a++;
	}
}

int	main(void)
{
	int	a;

	i = 3;
	ft_print_comn(a);
	return (0);
}
