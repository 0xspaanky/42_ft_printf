/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fcns_II.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <smounafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:58:24 by smounafi          #+#    #+#             */
/*   Updated: 2022/11/05 01:51:20 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadeconv_tolow(unsigned int nb)
{
	int	counter;

	counter = 0;
	if (nb < 16)
	{
		if (nb < 10)
			nb += 48;
		else
			nb += 87;
		counter += ft_putchar((char)nb);
	}
	else
	{
		counter += ft_hexadeconv_tolow(nb / 16);
		counter += ft_hexadeconv_tolow(nb % 16);
	}
	return (counter);
}

int	ft_adressconv(unsigned long nb)
{
	int	counter;

	counter = 0;
	if (nb < 16)
	{
		if (nb < 10)
			nb += 48;
		else
			nb += 87;
		counter += ft_putchar((char)nb);
	}
	else
	{
		counter += ft_adressconv(nb / 16);
		counter += ft_adressconv(nb % 16);
	}
	return (counter);
}
