/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:10:57 by epng              #+#    #+#             */
/*   Updated: 2023/09/24 15:53:44 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*destination;
	int		len;
	int		count;

	len = 0;
	count = 0;
	while (s1[len] != '\0')
		len++;
	destination = (char *)malloc(sizeof(char) * (len +1));
	if (!destination)
		return (NULL);
	while (count < len)
	{
		destination[count] = s1[count];
		count++;
	}
	destination[count] = '\0';
	return (destination);
}
/*
#include <stdio.h>
int	main (void)
{
	char	*original = "This is a string";
	char	duplicate[6];

	printf("\n");
	printf("Original: \"%s\"\n", original);
	printf("Target Memory Pointer: \"%s\"\n", duplicate);
	printf("\n");
	printf("After ft_strdup original to target memory...");
	char *result = ft_strdup(original);
	printf("\n");

	if (result != NULL)
	{
		printf("\n");
		printf("Original String: \"%s\"\n", original);
		printf("Duplicate Result: \"%s\"\n", result);
		printf("\n");
		free(result);
		
	}
	else
		printf("Memory allocation failed.\n");

	return 0;
}
*/
