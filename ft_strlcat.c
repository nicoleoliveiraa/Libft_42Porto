/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:21:27 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:43 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlength;
	size_t	srclength;
	size_t	i;
	size_t	j;

	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	i = 0;
	j = dstlength;
	if (destLength >= size)
		return (srclength + size);
	if (dstlength < size - 1 && size > 0)
	{
		while (j < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[size - 1] = '\0';
	}
	return (dstlength + srclength);
}

/* #include <stdio.h>
int main(void)
{
	char source[] = " world!";
	char destination[] = "hello";
	size_t size = 0;

	printf("%zu\n", ft_strlcat(destination, source, size));
	printf("%s\n", destination);
} */