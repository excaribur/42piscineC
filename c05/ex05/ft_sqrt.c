/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:03:45 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/25 16:59:05 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0 || nb > 2147395600)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			break ;
		i++;
	}
	return (0);
}
