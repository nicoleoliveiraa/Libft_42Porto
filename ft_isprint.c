int     ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (16384);
    else
        return (0);
}

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int c;

    c = '6';
    printf("%d\n", isprint(c));
    printf("%d\n", ft_isprint(c));
}