/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:56:34 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/06 17:06:18 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/bsd.h>

int main (void)
{
    //int c = ' ';
    //const char str[] = "Nicole";
    //char str[] = "Nicole";
    //char str1[] = "ol";
    char s1[] = "abc";
    char s2[] = "defttt";

    //printf("%d\n", isalpha(c));
    //printf("%d\n", ft_isalpha(c));

    //printf("%d\n", isdigit(c));
    //printf("%d\n", ft_isdigit(c));

    //printf("%d\n", isalnum(c));
    //printf("%d\n", ft_isalnum(c));

    //printf("%d\n", isascii(c));
    //printf("%d\n", ft_isascii(c));

    //printf("%d\n", isprint(c));
    //printf("%d\n", ft_isprint(c));

    //printf("%zd\n", ft_strlen(str));

    /*ft_memset(str, '.', 2);
	printf("%s\n", str);
	memset(str, '.', 2);
    printf("%s\n", str);*/

    /*ft_bzero(str, 2);
	printf("%s\n", str);
	bzero(str1, 2);
	printf("%s\n", str1);*/

    //ft_memcpy(str1, str, 7);
    //printf("%s\n", str1);

    //size_t i = ft_strlcpy(str1, str, 7);
    //printf("%s\n e %zd", str1, i);

    //int a = ft_strlcat(str1, str, 1);
    //printf("%s\n, %d", str1, a);

    //printf("%c\n", ft_toupper(c));
    //printf("%c\n", toupper(c));

    //printf("%c\n", ft_tolower(c));
    //printf("%c\n", tolower(c));

    //printf("%s\n", strchr(str, c));
    //printf("%s\n", ft_strchr(str, c));

    //printf("%s\n", strrchr(str, c));
    //printf("%s\n", ft_strrchr(str, c));

    //printf("%d\n", ft_strncmp(s1, s2, 4));
    //printf("%d\n", strncmp(s1, s2, 4));

    /*char *res = ft_memchr(str, c, 5);
    char *res1 = memchr(str, c, 5);
    printf("%s\n", res);
    printf("%s\n", res1);*/

    /*int result = memcmp(s1, s2, 3); 
    printf("%d\n", result);    
    int result2 = ft_memcmp(s1, s2, 3); 
    printf("%d\n", result2);*/
        
    /*const char nptr[] = "   -9871-5";
    int i = atoi(nptr);
    int j = ft_atoi(nptr);
    printf("%d\n", i);
    printf("%d\n", j);*/
    
    //printf("%s\n", ft_strnstr(str, str1, 0));
    //printf("%s\n", strnstr(str, str1, 0));
    
    char    *result = memmove(s1, s2, 3); 
    printf("%s\n", result);    
    char    *result2 = ft_memmove(s1, s2, 3); 
    printf("%s\n", result2);

    //printf("%s\n", ft_strdup(str));
    //printf("%s\n", strdup(str));

    

}