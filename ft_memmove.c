#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest[n - 1]) = ((unsigned char *)src[n - 1]);
			n--;
		}
	} else
		ft_memcpy(dest, src, n);
	return (dest);
}

