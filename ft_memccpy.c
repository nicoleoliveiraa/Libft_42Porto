#include <stddef.h>
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    if (!src)
        return (NULL);
    i = 0;
    while (i < n)
    {
        if (((char *)src)[i] == c)
            return ((char *)dest + i + 1);
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (NULL);
}

#include <stdio.h>
int main(void)
{
    const char *source = "Hello, World!";
    char destination[20];
    int stop_char = 'e';

    void *result = ft_memccpy(destination, source, stop_char, sizeof(destination));

    if (result != NULL) {
        printf("Caractere de parada encontrado: %c\n", *(char *)result);
    } else {
        printf("Caractere de parada não encontrado.\n");
    }

    printf("Destination: %s\n", destination);

    return 0;
}