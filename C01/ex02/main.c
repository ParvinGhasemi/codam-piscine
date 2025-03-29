/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/29 16:17:26 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/29 16:19:06 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 5;
	num2 = 7;
	printf("Befor	>>	a = %d,	b = %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("After	>>	a = %d,	b = %d\n", num1, num2);
}
