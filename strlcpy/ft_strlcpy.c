
#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	 i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	
	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return(ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
		return(ft_strlen(src));	
}

int	main(void){
	char src[] = "Hello, ";
	char dest[20] = "World";
	printf("%lu", ft_strlcpy(dest, src, sizeof(dest)));
	for (int i=0; i < ft_strlen(dest); i++)
		printf("%c", dest[i]);
}
