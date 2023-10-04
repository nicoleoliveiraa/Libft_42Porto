#include <stddef.h>
size_t     ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstLength;
    size_t srcLength;
    size_t i;
    size_t j;

    dstLength = ft_strlen(dst);
    srcLength = ft_strlen(src);
    i = 0;
    j = dstLength;
    if (dstLength < size - 1 && size > 0)
    {
        while (j < size - 1)
        {
            dst[j] = src[i];
            j++;
            i++;
        }
        dst[size - 1] = '\0';
    }
    return (dstLength + srcLength);
}

#include <stdio.h>
int main(void)
{
    char source[] = " world!";
    char destination[] = "hello";
    size_t size = 0;

    printf("%zu\n", ft_strlcat(destination, source, size));
    printf("%s\n", destination);
}