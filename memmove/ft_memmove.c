
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char tempBuffer[len];
	size_t i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;

	while (i < len)
	{
		tempBuffer[i] = s[i];
		i++;
	}

	i = 0;
	while(i<len)
	{
		d[i] = tempBuffer[i];
		i++;
	}
	return (dst);
	
}
/*
int	main(void)
{
	//char str[] = "HELLO WORLD";
        //char *src = str;
	//char *dest = src + 2;
	//int src[] = {1, 2, 3, 4, 5};
    	//int dest[5];

	ft_memmove(dest, src, 4);
	for (size_t i = 0; i < 9 ;i++)
		printf("%c\n", dest[i]);
}
