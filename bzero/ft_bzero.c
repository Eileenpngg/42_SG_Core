
#include <stddef.h>
#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *str;

	str = (unsigned char*)s;
	i = 0;
	if (n > 0)
	{
		while(i < n)
		{
			str[i]='\0';
			i++;
		}
	}
}
/*
int	main(void)
{
	char a[] = "hello";
	ft_bzero(a, 2);
	for (int i = 0; i < 5; i++)
		printf("%c", a[i]);
}
*/
