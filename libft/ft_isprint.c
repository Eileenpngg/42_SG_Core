/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:07:31 by epng              #+#    #+#             */
/*   Updated: 2023/09/21 17:18:47 by epng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main()
{
	printf("%i\n", isprint('\t'));
	printf("%i\n", isprint('\n'));
	printf("%i\n", isprint('\r'));
	printf("%i\n", isprint('\f'));
	printf("%i\n", isprint(' '));
	printf("%i\n", isprint('1'));
	printf("%i\n", isprint('	'));
        printf("%i\n", isprint('a'));
}
*/
