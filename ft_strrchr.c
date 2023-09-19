/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <epng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:58:25 by epng              #+#    #+#             */
/*   Updated: 2023/09/19 12:02:26 by epng             ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	character;

	i = ft_strlen(s) + 1;
	character = (unsigned char) c;
	while (i > 0)
	{
		if (s[i] == character)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
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