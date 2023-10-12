/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:04:58 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/12 15:15:27 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*aux;

	aux = lst;
	len = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		len++;
	}
	return (len);
}
