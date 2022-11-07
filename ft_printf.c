/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <smounafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:57:43 by smounafi          #+#    #+#             */
/*   Updated: 2022/11/07 09:17:50 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checkconversion(char c, va_list list)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(list, int));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		count += ft_putnbr(va_arg(list, unsigned int));
	else if (c == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (c == 'x')
		count += ft_hexadeconv_tolow(va_arg(list, unsigned int));
	else if (c == 'X')
		count += ft_hexadeconv_toup(va_arg(list, unsigned int));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_adressconv((unsigned long)va_arg(list, void *));
	}
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(list, str);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				break ;
			count += checkconversion(str[i], list);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (count);
}
