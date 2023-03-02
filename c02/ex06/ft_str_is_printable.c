/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:10:01 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/12 21:11:12 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 32 || *str > 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
