#include <stddef.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
    {
        if (i == (n - 1))
            return (0);
        i++;  
    }
    return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int main (void)
{
    char s1[] = "abcdef";
    char s2[] = "abcf";

    printf("%d\n", ft_strncmp(s1, s2, 4));
    printf("%d\n", strncmp(s1, s2, 4));
}