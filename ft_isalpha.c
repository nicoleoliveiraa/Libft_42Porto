int     ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1024);
    else
        return (0);
}

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int c;

    c = 'S';
    printf("%d\n", isalpha(c));
    printf("%d\n", ft_isalpha(c));
}