/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:30:25 by epng              #+#    #+#             */
/*   Updated: 2023/09/24 17:23:45 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	str_len;
	size_t			i;
	char			*str;

	i = 0;
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	if ((start + len > str_len))
		str = (char *) malloc ((str_len - start + 1) * sizeof(char));
	else
		str = (char *) malloc (sizeof(*s) * (len + 1));
	if (str == 0)
		return (0);
	while (s[start + i] && start < str_len && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
