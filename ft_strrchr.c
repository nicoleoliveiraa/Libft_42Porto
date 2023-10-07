/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:39:16 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/07 13:53:46 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*lastc;

	i = 0;
	lastc = NULL;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			lastc = (char *)&str[i];
		i++;
	}
	return (lastc);
}

/* #include <stdio.h>
int main(void)
{
   const char lookat[] = "hello world";
	int c = 'o';
	char *result = ft_strrchr(lookat, c);

	if (result != NULL) {
		printf("Caractere encontrado: %c\n", *result);
		printf("Índice na string: %ld\n", result - lookat);
	} else {
		printf("Caractere não encontrado.\n");
	}

	return 0;
}
 */