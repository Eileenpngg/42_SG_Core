#include <stdio.h>

int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (c + 32);
        return (c);
}

int     main(void)
{
        int     c = 'B';
        printf("%c", ft_tolower(c));
}
