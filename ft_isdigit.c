/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:06:57 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 16:07:03 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	one = '1';

	printf("%i\n", ft_isdigit(one));
	printf("%i\n", ft_isdigit('2'));
	printf("%i\n", ft_isdigit('A'));
	printf("%i\n", ft_isdigit('W'));
	printf("%i\n", ft_isdigit('@'));
	printf("%i\n", ft_isdigit('*'));
}
*/
