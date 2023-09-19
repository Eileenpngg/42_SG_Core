/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:33:30 by epng              #+#    #+#             */
/*   Updated: 2023/09/19 11:38:22 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	character;

	i = ft_strlen(s);
	character = (unsigned char) c;
	while (i >= 0)
	{
		if (*s == character)
			return ((char *) s);
		i--;
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str[] = "Hello World!";
	char c = 'o';
	char *result = ft_strchr(str ,c);
	if (result != NULL)
	{
		for (int i = 0; result[i] != '\0' ; i++)
			printf("%c", result[i]);
	}
	else
        	printf("not found in the string'%c'.", c);
}
*/
