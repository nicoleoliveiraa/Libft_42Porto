#include <stddef.h>
size_t     ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

#include <stdio.h>

int     main(void)
{
    const char str[] = "Nicole";
    size_t i = ft_strlen(str);
    printf("%zd\n", i);
    return (0);
}