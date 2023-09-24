/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:06:12 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 17:24:11 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	printf("%i\n", ft_isascii(-1));
	printf("%i\n", ft_isascii('i'));
	printf("%i\n", ft_isascii('H'));
	printf("%i\n", ft_isascii('1'));
}
*/
