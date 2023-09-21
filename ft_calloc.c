/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:13:37 by epng              #+#    #+#             */
/*   Updated: 2023/09/20 16:58:12 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, size * count);
	return (result);
}
/*
#include <stdio.h>
int	main (void)
{
	size_t count = 5;
	size_t size = sizeof(int);
	int *array = ft_calloc(count, size);

	if (array != NULL)
	{
		printf("Memory allocation successful.\n");
		for (size_t i = 0; i < count; i++)
			printf("array[%zu] : %d | %p\n", i, array[i], &array[i]);
		free(array);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
*/
