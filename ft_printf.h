/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <smounafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:29:25 by smounafi          #+#    #+#             */
/*   Updated: 2022/11/06 21:18:47 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(long nb);
int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_hexadeconv_toup(unsigned int nb);
int	ft_hexadeconv_tolow(unsigned int nb);
int	ft_adressconv(unsigned long nb);
#endif
