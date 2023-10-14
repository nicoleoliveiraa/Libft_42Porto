/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:20:16 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/14 19:50:17 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countw(char const *s, char c)
{
	int	i;
	int	qt;

	i = 0;
	qt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			qt += 1;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (qt);
}

static size_t	ft_substrlen(const char *s, int i, char c)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	sp = (char **)malloc((ft_countw(s, c) + 1) * sizeof(char *));
	if (sp == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			sp[j] = ft_substr(s, i, ft_substrlen(s, i, c));
			if (!sp[j])
				return (ft_free(sp, j));
			j++;
			i += ft_substrlen(s, i, c);
		}
		else
			i++;
	}
	sp[j] = NULL;
	return (sp);
}
