#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	littlelen;

	i = 0;
	littlelen = ft_strlen(little);
	while(big[i] != '\0' && i <= len - littlelen)
	{
		if (big[i] == little[0])
			if (ft_memcmp(big + i, little, littlelen) == 0)
				return ((char *)big + i);
		i++;
	}
	return (NULL);
}
 
/* #include <stdio.h>
int main(void)
{
	const char *a = "aaabbbbaaaa";
	const char *b = "bbbb";

	printf("%s\n", ft_strnstr(a, b, 7));
}  */