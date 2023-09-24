/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:04:55 by epng              #+#    #+#             */
/*   Updated: 2023/09/21 18:57:28 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = n - 1;
	d = (char *)dst;
	s = (char *)src;
	if (!d && !s)
		return (((void *)0));
	if (&d[i] < &s[i])
		ft_memcpy(d, s, n);
	else
	{
		while ((i + 1) > 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "HELLO WORLD";
        char *src = str;
	char *dest = src + 2;
	//int src[] = {1, 2, 3, 4, 5};
    	//int dest[5];

	ft_memmove(dest, src, 4);
	for (size_t i = 0; i < 9 ;i++)
		printf("%c\n", dest[i]);
}
*/
