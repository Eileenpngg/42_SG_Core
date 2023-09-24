/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:44:30 by epng              #+#    #+#             */
/*   Updated: 2023/09/19 11:51:35 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	counter;
	size_t	match;

	counter = 0;
	match = 0;
	if (substr[0] == '\0')
		return ((char *) str);
	while (str[counter] != '\0' && counter < len)
	{
		while (str[counter + match] == substr[match] && counter + match < len)
		{
			if (substr[match + 1] == '\0')
				return ((char *)(str + counter));
			match++;
		}
		match = 0;
		counter++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *haystack = "This is a sample string";
	const char *needle = "sample";
	size_t n = 20;

	char *result = ft_strnstr(haystack, needle, n);

	if (result != 0)
		printf("Found \"%s\" in substring \"%s\"\n", needle, result);
	else
		printf("Substring not found\n");
	return (0);
}
*/
