
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, void *restrict src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t	i;

	d = dst;
	s = src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char src[] = "HELLO";
	char dest[] = "BYEBYEHEY";
	
	ft_memcpy(dest, src, 4);
	for (int i = 0; i < 10; i++)
		printf("%c", dest[i]);
}
*/
