/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fcns.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <smounafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:11:31 by smounafi          #+#    #+#             */
/*   Updated: 2022/11/06 21:19:07 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		counter++;
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		counter += ft_putnbr(nb / 10);
		counter += ft_putnbr(nb % 10);
	}
	else
		counter += ft_putchar(nb + '0');
	return (counter);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
		return (i);
	}
	return (ft_putstr("(null)"));
}

int	ft_hexadeconv_toup(unsigned int nb)
{
	int	counter;

	counter = 0;
	if (nb < 16)
	{
		if (nb < 10)
			nb += 48;
		else
			nb += 55;
		counter += ft_putchar((char)nb);
	}
	else
	{
		counter += ft_hexadeconv_toup(nb / 16);
		counter += ft_hexadeconv_toup(nb % 16);
	}
	return (counter);
}
