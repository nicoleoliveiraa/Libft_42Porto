#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
     size_t i;

    i = 0;
    if (!s)
        return;
    while (i < n)
    {
        ((char *)s)[i] = '\0';
        i++;
    }
}

#include <stdio.h>
int main(void)
{
    char str[6] = "Hello";
    
    ft_bzero(str, 2);
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, str[i]);
    }
    
    return 0;
}