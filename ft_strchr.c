/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:20:20 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/07 13:50:09 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
   const char lookat[] = "hello world";
	int c = 'l';
	char *result = ft_strchr(lookat, c);

	if (result != NULL) {
		printf("Caractere encontrado: %c\n", *result);
		printf("Índice na string: %ld\n", result - lookat);
	} else {
		printf("Caractere não encontrado.\n");
	}

	return 0;
}
 */