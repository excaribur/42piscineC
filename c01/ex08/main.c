/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:50:10 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/12 16:44:27 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size);
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
	int arr[5]= {1, 65, 21, 0, -5};
	ft_printarr(arr, 5);
	write(1, "\n", 1);
	ft_sort_int_tab(arr, 5);
	ft_printarr(arr, 5);
}
*/
