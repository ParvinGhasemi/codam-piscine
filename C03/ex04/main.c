/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 22:13:52 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/08 22:15:19 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
    char	*str1 = "Hello world";
    char	*str2 = "to test banananananana test!";
    char	*find1 = "world";
    char	*find2 = "test";
    char	*find3 = "";
    char	*find4 = "nananana ";
    char	*result;
    // Example 1: Finding "world" in "Hello world"
    printf("Searching for \"%s\" in \"%s\":\n", find1, str1);
    result = ft_strstr(str1, find1);
    if (result)
        printf("Found: \"%s\"\n\n", result);
    else
        printf("Not found.\n\n");
    // Example 2: Trying to find "test" in "Hello world"
    printf("Searching for \"%s\" in \"%s\":\n", find2, str1);
    result = ft_strstr(str1, find2);
    if (result)
        printf("Found: \"%s\"\n\n", result);
    else
        printf("Not found.\n\n");
    // Example 3: Searching with an empty string
    printf("Searching for an empty string in \"%s\":\n", str1);
    result = ft_strstr(str1, find3);
    if (result)
        printf("Found: \"%s\"\n\n", result);
    else
        printf("Not found.\n\n");
    // Example : Searching for a repeated word in a sentence
    printf("Searching for \"%s\" in \"%s\":\n", find4, str2);
    result = ft_strstr(str2, find4);
    if (result)
        printf("Found: \"%s\"\n\n", result);
    else
        printf("Not found.\n\n");
    return 0;
}

