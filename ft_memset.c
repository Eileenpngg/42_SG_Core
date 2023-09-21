/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:08:21 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 16:08:55 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = s;
	val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = val;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[] = "Hello, World!";
	
	printf("Original string: %s\n", str);
	
	ft_memset(str, 'A', 5);
	
	printf("Modified string: %s\n", str);
	
	return 0;
}
*/
