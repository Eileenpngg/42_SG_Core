/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:02:14 by epng              #+#    #+#             */
/*   Updated: 2023/09/18 21:14:40 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
	}
}
/*
#include <stdio.h>

int     main(void)
{
        char a[] = "hello";
        ft_bzero(a, 2);
        for (int i = 0; i < 5; i++)
                printf("%c", a[i]);
}
*/
