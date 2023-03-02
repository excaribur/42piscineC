/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:14:42 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/26 14:29:46 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

# define LENGTH 100

struct book
{
	unsigned int	number;
	char			*word;
};


t_book	g_dict[LENGTH];

int				ft_open(char *argv);
unsigned int	ft_atoi_unsigned(char *str);
void			ft_error(void);
void			ft_screen_nbrs(unsigned int value, char *argv);
void			ft_putstr(char *str);
int				ft_checkinput(char *str);
void			ft_free_dict(int n);

#endif
