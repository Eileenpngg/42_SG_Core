/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:03:29 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 16:04:16 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_isalpha('H'));
        printf("%i\n", ft_isalpha('a'));
        printf("%i\n", ft_isalpha('@'));
        printf("%i\n", ft_isalpha('1'));

}
*/
