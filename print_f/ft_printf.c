/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:49:30 by epng              #+#    #+#             */
/*   Updated: 2023/10/20 18:25:51 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tounsigned(int nbr, char *base, int *count)
{
	long long int	nb;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	ft_putullnbr(nb, base, count);
}

static void	ft_checkformat(va_list args, char format, int *count)
{
	if (format == 'c')
		ft_putchar(va_arg(args, unsigned int), count);
	if (format == 's')
		ft_putstr(va_arg(args, char *), count);
	if (format == 'p')
		ft_putptr(va_arg(args, void *), count);
	if (format == 'd')
		ft_tounsigned(va_arg(args, int), "0123456789", count);
	if (format == 'i')
		ft_tounsigned(va_arg(args, int), "0123456789", count);
	if (format == 'u')
		ft_putullnbr(va_arg(args, unsigned int), "0123456789", count);
	if (format == 'x')
		ft_putullnbr(va_arg(args, unsigned int), "0123456789abcdef", count);
	if (format == 'X')
		ft_putullnbr(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	if (format == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_checkformat(args, str[i + 1], &count);
			i++;
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
