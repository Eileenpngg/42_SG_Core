/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:43:16 by epng              #+#    #+#             */
/*   Updated: 2023/09/19 11:43:57 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	//const char *str1 = "Hello, World!";
    	//const char *str2 = "Hello, C!";
	//int n = 5;
	const char *str1 = "Apple";
    	const char *str2 = "Banana";
    	int n = 3;
	printf("%i", ft_strncmp(str1, str2, n));
}
*/
