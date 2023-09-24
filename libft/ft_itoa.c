/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:15:50 by epng              #+#    #+#             */
/*   Updated: 2023/09/24 15:20:21 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long int n)
{
	if (n / 10 != 0)
		return (1 + count_digit(n / 10));
	else if (n < 0)
		return (2);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	long int	num;
	int			len;
	int			i;
	char		*str;

	num = n;
	len = count_digit(num);
	i = (len - 1);
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (i >= 0 && str[i] != '-')
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}
/*
int	main(void)
{
	int	n = -1234566;
	printf("%s", ft_itoa(n));
}
*/
