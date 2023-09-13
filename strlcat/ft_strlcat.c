#include <string.h>
#include <stdio.h>

int     ft_strlen(const char *str)
{
        int      i;

        i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if(!dst || !src)
		return (0);
	if (dstsize == 0)
		return(ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while(src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return(ft_strlen(dst));
}

int main(void){
	char src[] = "Hello, ";
	char dest[20] = "World";
	printf("%zu\n", ft_strlcat(dest, src, sizeof(dest)));
	for (int i=0; i < ft_strlen(dest); i++)
                printf("%c", dest[i]);
}
