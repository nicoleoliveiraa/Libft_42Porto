int     ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (8);
    return (0);
}

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int c = '\t';

    printf("%d\n", isalnum(c));
    printf("%d\n", ft_isalnum(c));
    return (0);
}