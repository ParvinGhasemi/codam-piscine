/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 21:15:49 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/31 21:22:37 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int random_arr[] = {1, 2, 3, 4};
	// Checking for odd-length array
	printf("Checking for even-length array\n");
	int size = 4;
	printf("Before	>>	");
	for (int i = 0; i < size; i++)
		printf("%d, ", random_arr[i]);
	printf("\n");
	ft_rev_int_tab(random_arr, size);
	printf("After	>>	");
	for (int i = 0; i < size; i++)
		printf("%d, ", random_arr[i]);
	printf("\n\n");
	// Checking for even-length array
	printf("Checking for odd-length array\n");
	int	arr_three[3] = {1, 2, 3};
	size = 3;
	printf("Before	>>	");
	for (int i = 0; i < size; i++)
		printf("%d, ", arr_three[i]);
	printf("\n");
	ft_rev_int_tab(arr_three, size);
	printf("After	>>	");
	for (int i = 0; i < size; i++)
		printf("%d, ", arr_three[i]);
	printf("\n\n");
	// Checking for EMPTY array
	printf("Checking for Empty array\n");
	int	empty_arr[0] = {};
	size = 0;
	printf("Before	>>	");
	for (int i = 0; i < 0; i++)
		printf("%d, ", empty_arr[i]);
	printf("\n");
	ft_rev_int_tab(empty_arr, size);
	printf("After	>>	");
	for (int i = 0; i < size; i++)
		printf("%d, ", empty_arr[i]);
}
