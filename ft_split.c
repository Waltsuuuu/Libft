/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:13:22 by wheino            #+#    #+#             */
/*   Updated: 2025/04/23 17:28:13 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory and returns arra of strings obtainned by splitting
// string s, using the char 'c' as a delimiter.
// Array must end with a null pointer.

// Parameters:
// s = the string to be split
// c = the delimiter char

// Returns:
// 1. Array of new strings resulting from the split
// 2. NULL if alloc fail 

#include "libft.h"
#include <stdio.h>

// TODO: Free everything if we have a memory allocation error

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

char **ft_split(char const *s, char c)
{
    char **arr;
    int i;
    char *temp_s;
    int arr_len;

    arr_len = word_count(s, c);
    temp_s = (char *)s;
    arr = malloc(arr_len * sizeof(arr) + 1);
    if(!arr)
        return(NULL);
    i = 0;
    while(i < arr_len)
    {
        while(*temp_s == c)
            temp_s++;
        arr[i] = fill_word(temp_s, c);
        temp_s = temp_s + ft_strlen(arr[i]) + 1;
        i++;
    }
    arr[i] = NULL;
    // for (int i = 0; i <= word_count(s, c); i++) {
    //     printf("Arr word [%d] = %s\n", i, arr[i]);
    // }
    return(arr);
}

int main()
{
    char *str = "  One Two Three Four897   ";
    printf("Word count = %d\n", word_count(str, ' '));

    ft_split(str, ' ');
    return(0);
}