/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:59:50 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 16:02:55 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_isalnum('1'));
	printf("%i\n", ft_isalnum('9'));
	printf("%i\n", ft_isalnum('5'));
	printf("%i\n", ft_isalnum('@'));
	printf("%i\n", ft_isalnum('H'));
	printf("%i\n", ft_isalnum('i'));
}
*/
