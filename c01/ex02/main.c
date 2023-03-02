/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:21:28 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/07 23:00:43 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

void	ft_swap(int *a, int *b);
void	ft_putnbr(int a);

int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 90;
	ft_putnbr(a);
	write(1, ":", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	ft_putnbr(a);
	write(1, ":", 1);
	ft_putnbr(b);
	return (0);
}
