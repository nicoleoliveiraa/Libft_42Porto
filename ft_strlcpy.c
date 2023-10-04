#include <stddef.h>
size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size > 0)
    {
        while (src[i] && i < size -1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    i = 0;
    while (src[i])
        i++;    
    return (i);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char source[] = "Hello world!";
    char destination[10];
    size_t length = ft_strlcpy(destination, source, 10);

    printf("%zu\n", length);
    printf("%s\n", destination);
}