/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:58:25 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 20:17:36 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	character;
	int				i;

	i = ft_strlen(s);
	character = (unsigned char) c;
	while (i >= 0)
	{
		if (s[i] == character)
			return ((char *) s + i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int     main(void)
{
        const char str[] = "Hello World!";
        char c = 'o';
        char *result = ft_strrchr(str ,c);
        if (result != NULL)
        {
                for (int i = 0; result[i] != '\0' ; i++)
                        printf("%c", result[i]);
        }
        else
                printf("not found in the string'%c'.", c);
}
*/
