/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:16:25 by epng              #+#    #+#             */
/*   Updated: 2023/10/19 23:51:20 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c, int *count)
{
	*count += 1;
	write(1, &c, 1);
}

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], count);
		i++;
	}
}

void	ft_putptr(void *ptr, int *count)
{
	if (!ptr)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_putullnbr((unsigned long long int)ptr, "0123456789abcdef", count);
}

void	ft_putullnbr(unsigned long long int nb, char *base, int *count)
{
	if (ft_strlen(base) == 10)
	{
		if (nb > 9)
			ft_putullnbr((nb / 10), base, count);
		ft_putchar(base[nb % 10], count);
	}
	else if (ft_strlen(base) == 16)
	{
		if (nb > 15)
			ft_putullnbr((nb / 16), base, count);
		ft_putchar(base[nb % 16], count);
	}
}
