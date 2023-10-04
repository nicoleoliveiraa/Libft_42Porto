#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (!dest)
        return (NULL);
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
int main(void)
{
        int dest[6];
        int src[] = {1, 2, 3, 4, 5};

        ft_memcpy(dest, src, 3 * sizeof(int));
        for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, dest[i]);
        }
}
