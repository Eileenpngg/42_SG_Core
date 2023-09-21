/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:02:43 by epng              #+#    #+#             */
/*   Updated: 2023/09/19 12:11:03 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
    	int target = 3;

    	void *result = ft_memchr(arr, target, sizeof(arr));

    	if (result != 0)
    	{
        	printf("Found %d at index %ld\n", target, (int *)result - arr);
    	}
    	else
    	{
        	printf("%d not found\n", target);
    	}

    return (0);
}
*/
