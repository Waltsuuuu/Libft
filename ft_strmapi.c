/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:38:34 by wheino            #+#    #+#             */
/*   Updated: 2025/04/24 16:22:09 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *str;
    int i;
    
    if(!s || !f)
        return(NULL);
    str = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
    if(!str)
        return(NULL);
    ft_strlcpy(str, s, ft_strlen((char *)s) + 1);
    i = 0;
    while(s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return(str);
}
