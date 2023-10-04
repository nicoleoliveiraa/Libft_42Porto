#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

#include <stdio.h>
int main() {
    int arr[5];
    
    ft_memset(arr, 1, 3 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}