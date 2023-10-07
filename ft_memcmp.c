/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:38:20 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/07 18:44:31 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
		n--;
	}
	return (0);
}