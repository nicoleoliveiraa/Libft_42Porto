#include <stddef.h>
char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i++;
    }
    return (NULL);
}

#include <stdio.h>
int main(void)
{
   const char lookat[] = "hello world";
    int c = 'l';
    char *result = ft_strchr(lookat, c);

    if (result != NULL) {
        printf("Caractere encontrado: %c\n", *result);
        printf("Índice na string: %ld\n", result - lookat);
    } else {
        printf("Caractere não encontrado.\n");
    }

    return 0;
}
