/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:13:22 by wheino            #+#    #+#             */
/*   Updated: 2025/04/24 16:37:46 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int word_count(char const *s, char c);
static char *fill_word(char *s, char c);
void free_arr(char **arr, int i);

int word_count(char const *s, char c)
{
    int i;
    int wc;

    i = 0;
    wc = 0;
    while(s[i] == c)
        i++;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            while(s[i + 1] == c)
                i++;
            if(s[i + 1] == '\0')
                break;
            wc++;
        }
        i++;
    }
    if(wc >= 1)
        wc++;
    return(wc);
}

char *fill_word(char *s, char c)
{
    int i;
    int start;
    int end;
    char *word;

    i = 0;
    while(s[i] == c)
        i++;
    start = i;
    while(s[i] != c && s[i])
        i++;
    end = i;
    word = malloc((end - start) * (sizeof(char)) + 1);
    if(!word)
        return(NULL);
    i = 0;
    while(start < end)
    {
        word[i] = s[start];
        i++;
        start++;    
    }
    word[i] = '\0';
    return(word);
}

void free_arr(char **arr, int i)
{
    while(i >= 0)
    {
        free(arr[i]);
        i--;
    }
    free(arr);
}

char **ft_split(char const *s, char c)
{
    char **arr;
    int i;
    char *temp_s;

    temp_s = (char *)s;
    arr = malloc((word_count(s, c) + 1) * sizeof(char *));
    if(!arr)
        return(NULL);
    i = 0;
    while(i < word_count(s, c))
    {
        while(*temp_s == c)
            temp_s++;
        arr[i] = fill_word(temp_s, c);
        if(!arr[i])
        {
            free_arr(arr, i);
            return(NULL);
        }
        temp_s = temp_s + ft_strlen(arr[i]) + 1;
        i++;
    }
    arr[i] = NULL;
    return(arr);
}
