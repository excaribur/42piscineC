/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:54:55 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/12 16:40:39 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h> 

void	ft_rev_int_tab(int *tab, int size);
void	ft_putnbr(int a);

void	ft_printarr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		write(1, " ", 1);
		i++;
	}
}
/*
int	main(void)
{
	int	arr[6] = {0, 1, 12, 21, 42, 99};
	
	ft_printarr(arr, 6);
	write(1, "\n", 1);
	ft_rev_int_tab(arr, 6);
	ft_printarr(arr, 6);
}
*/
