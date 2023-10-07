/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:09:01 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/07 13:45:12 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/* #include <stdio.h>
int main(void)
{
	char str[6] = "Hello";
	
	ft_bzero(str, 2);
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, str[i]);
	}
	
	return 0;
} */