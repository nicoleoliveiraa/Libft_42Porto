int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c = 3;

    printf("%d\n", ft_tolower(c));
    printf("%d\n", tolower(c));
}