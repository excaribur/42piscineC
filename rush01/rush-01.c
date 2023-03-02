/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:42:41 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/15 22:29:32 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd>
 
void_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		putstr("Error");
		putstr("\n");
		return (0);
	}

	
}
