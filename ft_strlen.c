/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:09:39 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 16:09:49 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%li\n", ft_strlen(""));
	printf("%li\n", ft_strlen("12345678"));
	printf("%li\n", ft_strlen("HELLOBYE"));
	printf("%li\n", ft_strlen("HELLO123"));
}
*/
