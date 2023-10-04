int     ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c = 'q';

    printf("%c\n", ft_toupper(c));
    printf("%c\n", toupper(c));
}