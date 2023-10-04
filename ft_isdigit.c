int     ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (2048);
    return (0);
}

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int r;
    int c = '0';

    r = isdigit(c);
    printf("%d\n", r);
    printf("%d\n", ft_isdigit(c));
    return (0);
}