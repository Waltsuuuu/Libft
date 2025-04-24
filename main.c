#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

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

int main()
{
	// printf("\nft_isalpha = %d\n", ft_isalpha('a'));
	// printf("isalpha = %d\n\n", isalpha('a'));

	// printf("ft_isdigit = %d\n", ft_isdigit('2'));
	// printf("isdigit = %d\n\n", isdigit('2'));

	// printf("ft_isalnum = %d\n", ft_isalnum('g'));
	// printf("isalnum = %d\n\n", isalnum('g'));

	// printf("ft_isascii = %d\n", ft_isascii(120));
	// printf("isascii = %d\n\n", isascii(120));

	// printf("ft_isprint = %d\n", ft_isprint(300));
	// printf("isprint = %d\n\n", isprint(300));

	// printf("ft_strlen = %lu\n", ft_strlen("hello"));
	// printf("strlen = %lu\n\n", strlen("hello"));
 
	// //Memset test
	// char str_ft[10];

	// ft_memset(str_ft, 'X', 9);
	// str_ft[9] = '\0';

	// char str[10];
	// memset(str, 'X', 9);
	// str[9] = '\0';

	// printf("ft_memset = %s\n", str_ft);
	// printf("memset = %s\n\n", str);

	// //bzero test 
	// ft_bzero(str_ft, 9);
	// bzero(str, 9);

	// if (memcmp(str, str_ft, 10) == 0)
	// 	printf("ft_bzero works\n\n");
	// else 
	// {
	// 	printf("ft_bzero failed\n");
	// 	for (int i = 0; i < 10; i++)
	// 		printf("str[%d] = %d, str_ft[%d] = %d\n", i, str[i], i, str_ft[i]);
	// }

	// //Memcpy test
	// const char source[6] = "Hello";
	// char dest[6];

	// memcpy(dest, source, 6);
	// printf("%s", dest);

	//Memmove
	// const char src[6] = "Hello";
	// char dest[6];

	// ft_memmove(dest + 2, src, 6);
	// printf("dest = %s\n", dest);
	// memmove(dest + 2, src, 6);
	// printf("real memmove dest = %s", dest);

	//Strlcpy test
 	// const char src[6] = "Hello";
	// char dest[6];

	// ft_strlcpy(dest, src, 6);
	// printf("%s", dest);

	// //Strlcat test
	// const char src[6] = "World";
	// char dest[11] = "Hello";
	
	// ft_strlcat(dest, src, 11);
	// printf("%s", dest);
	
	// printf("%c", ft_tolower('S'));

	//Strrchr test

	// const char *str = "Hello";
	// char c = 'c';

	// ft_strrchr(str, c);

	// printf("%s", 	ft_strrchr(str, c));

	// char *big = "Hello dear";

	// char *little = "dear";

	// printf("%s", ft_strnstr(big, little, 9));
	// printf("%d", strnstr(big, little, 9));

	// char *str = "-2147483648";

	// printf("%d", ft_atoi(str));
	
	// int *arr;
	// int size = 0;

	// arr = ft_calloc(size, sizeof(int));
	
	// for(int i = 0; i < 4; i++){
	// 	printf("%d\n", arr[i]);
	// }
	// free(arr);

	// char *str1 = "Hello";
	// char *str2 = ft_strdup(str1);

	// printf("%s", str2);
	// char *str1 = "HelloWorld";
    // char *str2 = ft_substr(str1, 5, 5);

    // printf("%s", str2);
    // free(str2);

	// char *str1 = "Hello";
    // char *str2 = "World";
    // char *joined;

    // joined = ft_strjoin(str1, str2);
    // printf("%s", joined);

	// char *s1 = "HNOelloWorldHelNOHel";
    // char *set = "Hel";
    // char *trimmed = ft_strtrim(s1, set);
    // printf("%s", trimmed);

	//FT_SPLIT
	// char *test_string = "abc-abc";
    // char delimiter = '-';
	// char **arr;
    // arr = ft_split(test_string, delimiter);

	// for (int i = 0; i <= word_count(test_string, delimiter); i++) {
	// 	printf("Arr word [%d] = %s\n", i, arr[i]);
	// }

	// Test function to pass into strmapi
	// char alt_case(unsigned int i, char c) {
    // 	if (c >= 'a' && c <= 'z')
    //     	c -= 32; // to upper
    // 	if (i % 2 == 1 && c >= 'A' && c <= 'Z')
    //     	c += 32; // back to lower on odd indices
   	// 	return c;
	// }
 	return 0;
}