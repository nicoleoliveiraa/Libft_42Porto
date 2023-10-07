/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:16:15 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/07 13:49:05 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest)
		return (NULL);
	while (i < n)
	{
		(unsigned char)dest[i] = (unsigned char)src[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
		int dest[6];
		int src[] = {1, 2, 3, 4, 5};

		ft_memcpy(dest, src, 3 * sizeof(int));
		for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, dest[i]);
		}
} */
