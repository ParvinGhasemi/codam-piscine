/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/29 16:00:01 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/29 16:14:43 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********number);

int	main(void)
{
	int	num;

	num = 0;
	int	*ptr1 = &num;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	printf("Before	>>	%d\n", num);
	ft_ultimate_ft(ptr9);
	printf("After	>>	%d\n", num);
	printf("***====================***\n");
	printf("And here are the addresses:\n\n");
	// printing the address of variables using the & operator
	printf("address of num	>> %p\n", &num);
	printf("address of ptr1	>> %p\n", &ptr1);
	printf("address of ptr2	>> %p\n", &ptr2);
	printf("address of ptr3	>> %p\n", &ptr3);
	printf("address of ptr4	>> %p\n", &ptr4);
	printf("address of ptr5	>> %p\n", &ptr5);
	printf("address of ptr6	>> %p\n", &ptr6);
	printf("address of ptr7	>> %p\n", &ptr7);
	printf("address of ptr8	>> %p\n", &ptr8);
	printf("address of ptr9	>> %p\n\n", &ptr9);
	// printing the address of variables using the content of another variable
	// which is holding the address of another variable
	printf("address of num	>> %p\n", ptr1);
	printf("address of ptr1	>> %p\n", ptr2);
	printf("address of ptr2	>> %p\n", ptr3);
	printf("address of ptr3	>> %p\n", ptr4);
	printf("address of ptr4	>> %p\n", ptr5);
	printf("address of ptr5	>> %p\n", ptr6);
	printf("address of ptr6	>> %p\n", ptr7);
	printf("address of ptr7	>> %p\n", ptr8);
	printf("address of ptr8	>> %p\n", ptr9);
	printf("address of ptr9	>> %p\n", &ptr9);
	return (0);
}
