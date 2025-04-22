/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:02:10 by wheino            #+#    #+#             */
/*   Updated: 2025/04/22 12:47:01 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s        = string from which to create substring
// start    = the starting index of the substring
// len      = max len of substr

// Allocate memory and return substring

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;

    if(!s || start > ft_strlen((char *)s))
        return(NULL);
    substr = malloc((len + 1) * (sizeof(char)));
    ft_strlcpy(substr, &s[start], len + 1);
    return(substr);
}
