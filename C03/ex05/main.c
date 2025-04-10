/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 22:40:13 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/10 16:34:06 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// There are 2 main() here, to test it, and 2nd way to test it with the original strlcat()

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	char			dest1[50] = "Hello";
// 	char			dest2[50] = "Hello";
// 	char			dest3[50] = "Hello";
// 	char			src[] = " world!";
// 	unsigned int	ret;

// 	/* Test 1: Sufficient destination buffer.
// 	   size parameter is large enough so the entire src is concatenated. */
// 	ret = ft_strlcat(dest1, src, 50);
// 	printf("Test 1: size = 50\n");
// 	printf("Return value: %u\n", ret);
// 	printf("Resulting string: %s\n\n", dest1);

// 	/* Test 2: Size parameter is smaller than the length of destination string.
// 	   No characters from src are appended, and the return value is size + length(src). */
// 	ret = ft_strlcat(dest2, src, 3);
// 	printf("Test 2: size = 3\n");
// 	printf("Return value: %u\n", ret);
// 	printf("Resulting string: %s\n\n", dest2);

// 	/* Test 3: Size parameter allows partial concatenation.
// 	   Given dest3 starts as "Hello" (length 5), and size = 10,
// 	   then only (10 - 1 - 5) = 4 characters of src will be appended. */
// 	ret = ft_strlcat(dest3, src, 10);
// 	printf("Test 3: size = 10\n");
// 	printf("Return value: %u\n", ret);
// 	printf("Resulting string: %s\n\n", dest3);

// 	return (0);
// }

// tests below compare the result of ft_strlcat and the system strlcat functions
// you can comment/uncomment them to check
int	main(void)
{
	char	dest_ft[50];
	char	dest_sys[50];
	char	src[] = " world!";
	unsigned int	ret_ft;
	unsigned int	ret_sys;

	/* Test 1: Sufficient destination buffer.
	   Both functions should append the entire " world!" string.
	   The return value should be the initial length of "Hello" (5)
	   plus the length of src (7), which equals 12.
	*/
	snprintf(dest_ft, sizeof(dest_ft), "Hello");
	snprintf(dest_sys, sizeof(dest_sys), "Hello");

	ret_ft = ft_strlcat(dest_ft, src, 50);
	ret_sys = strlcat(dest_sys, src, 50);

	printf("Test 1 (size = 50):\n");
	printf("ft_strlcat returns: %u, result: %s\n", ret_ft, dest_ft);
	printf("strlcat returns:    %u, result: %s\n\n", ret_sys, dest_sys);

	/* Test 2: Size is too small to append any character from src.
	   In this case, destination should not change.
	   The return value should equal size + length(src).
	*/
	snprintf(dest_ft, sizeof(dest_ft), "Hello");
	snprintf(dest_sys, sizeof(dest_sys), "Hello");

	ret_ft = ft_strlcat(dest_ft, src, 3);
	ret_sys = strlcat(dest_sys, src, 3);

	printf("Test 2 (size = 3):\n");
	printf("ft_strlcat returns: %u, result: %s\n", ret_ft, dest_ft);
	printf("strlcat returns:    %u, result: %s\n\n", ret_sys, dest_sys);
	
	/*
	   Test 3: Partial concatenation.
	   Given "Hello" (5 characters) and size = 10,
	   only (10 - 1 - 5) = 4 characters from src can be added.
	   The return value is still the full intended length (5 + 7 = 12).
	*/
	snprintf(dest_ft, sizeof(dest_ft), "Hello");
	snprintf(dest_sys, sizeof(dest_sys), "Hello");

	ret_ft = ft_strlcat(dest_ft, src, 10);
	ret_sys = strlcat(dest_sys, src, 10);

	printf("Test 3 (size = 10):\n");
	printf("ft_strlcat returns: %u, result: %s\n", ret_ft, dest_ft);
	printf("strlcat returns:    %u, result: %s\n", ret_sys, dest_sys);

	return (0);
}
