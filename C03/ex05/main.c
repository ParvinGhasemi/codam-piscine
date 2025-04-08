/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 22:40:13 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/08 23:08:05 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest1[50] = "Hello";
	char			dest2[50] = "Hello";
	char			dest3[50] = "Hello";
	char			src[] = " world!";
	unsigned int	ret;

	/* Test 1: Sufficient destination buffer.
	   size parameter is large enough so the entire src is concatenated. */
	ret = ft_strlcat(dest1, src, 50);
	printf("Test 1: size = 50\n");
	printf("Return value: %u\n", ret);
	printf("Resulting string: %s\n\n", dest1);

	/* Test 2: Size parameter is smaller than the length of destination string.
	   No characters from src are appended, and the return value is size + length(src). */
	ret = ft_strlcat(dest2, src, 3);
	printf("Test 2: size = 3\n");
	printf("Return value: %u\n", ret);
	printf("Resulting string: %s\n\n", dest2);

	/* Test 3: Size parameter allows partial concatenation.
	   Given dest3 starts as "Hello" (length 5), and size = 10,
	   then only (10 - 1 - 5) = 4 characters of src will be appended. */
	ret = ft_strlcat(dest3, src, 10);
	printf("Test 3: size = 10\n");
	printf("Return value: %u\n", ret);
	printf("Resulting string: %s\n\n", dest3);

	return (0);
}
// These tests in this file were created using AI to to test the ft_strlcat function
