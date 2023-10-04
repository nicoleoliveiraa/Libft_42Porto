#include <stddef.h>
char *ft_strrchr(const char *str, int c)
{
    int i;
    char *lastC;

    i = 0;
    lastC = NULL;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            lastC = (char *)&str[i];
        i++;  
    }
    if (lastC == NULL)
        return (NULL);
    return (lastC);
    
}

#include <stdio.h>
int main(void)
{
   const char lookat[] = "hello world";
    int c = 'o';
    char *result = ft_strrchr(lookat, c);

    if (result != NULL) {
        printf("Caractere encontrado: %c\n", *result);
        printf("Índice na string: %ld\n", result - lookat);
    } else {
        printf("Caractere não encontrado.\n");
    }

    return 0;
}
