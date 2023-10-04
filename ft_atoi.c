int     ft_atoi(const char *nptr)
{
    int i;
    int signal;
    int number;

    signal = 1;
    i = 0;
    number = 0;
    while (nptr[i] > 8 && nptr[i] < 14 || nptr[i] == 32)
        i++;
    if (nptr[i] == '-')
        signal *= -1;
    i++;
    while (nptr[i] > 47 && nptr[i] < 58)
    {
        number = (number * 10) + (nptr[i] - 48);
        i++;
    }
    return (signal * number);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    const char nptr[] = "   -9871-5";
    int i = atoi(nptr);
    int j = ft_atoi(nptr);

    printf("%d\n", i);
    printf("%d\n", j);
}