/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:19:57 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 19:26:15 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
int main(void){
	char src[] = "Hello, ";
	char dest[20] = "World";
	printf("%zu\n", ft_strlcat(dest, src, sizeof(dest)));
	for (int i=0; i < ft_strlen(dest); i++)
                printf("%c", dest[i]);
    char dest [11] = "a";
    printf("%zu", ft_strlcat(dest, "lorem", 15));
    write(1, "\n", 1);
    write(1, dest, 15);
}
*/
