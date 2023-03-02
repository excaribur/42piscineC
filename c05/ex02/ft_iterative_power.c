/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:22:37 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/19 13:51:08 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	j = nb;
	while (i < power - 1)
	{
		j *= nb;
		i++;
	}
	return (j);
}
