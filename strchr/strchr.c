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

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	char character = (unsigned char)c;
	while (i >= 0)
	{
		if (*s == character)
			return ((char *)s); 
		i--;
		s++;
	}
	return (NULL);
}

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
