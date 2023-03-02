/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header_screen.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:21:59 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/24 16:52:37 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_SCREEN_H
# define FT_HEADER_SCREEN_H

void	ft_put_hunds(void);
void	ft_put_1000(void);
void	ft_put_mill(void);
void	ft_put_bill(void);
void	ft_1to9(unsigned int value);
void	ft_10to19(unsigned int value, int space);
void	ft_20to90(unsigned int value, int units);
void	ft_10to99(unsigned int value, int space);
void	ft_100to999(unsigned int value, int space);

#endif
