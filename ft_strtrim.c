/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:11:11 by wheino            #+#    #+#             */
/*   Updated: 2025/04/22 17:45:17 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s1 = string to be trimmed
// set = String containing the char to be removed

// Return copy of s1 - trimmed
// Return NULL if alloc fails

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *trim;
    int i;

    start = 0;
    while(ft_strchr(set, s1[start]) != NULL)
        start++;
    end = ft_strlen((char *) s1);
    while(ft_strchr(set, s1[end]) != NULL)
        end--;
    trim = malloc((end - start + 1) * sizeof(char));
    if(!trim)
        return(NULL);
    i = 0;
    while(start <= end)
    {
        trim[i] = s1[start];
        i++;
        start++;
    }
    return(trim);
}

int main()
{
    char *s1 = "HNOelloWorldHelNOHel";
    char *set = "Hel";
    char *trimmed = ft_strtrim(s1, set);
    printf("%s", trimmed);
    return 0;
}

// Loop s1 from start until char does not match any char in set
// Get index of last match
// Strchr 
// Loop s1 from end until current char does not match any char in set
// Get inxdex # of last match


