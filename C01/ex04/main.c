/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 02:58:12 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/31 02:59:58 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 11;
	num2 = 5;
	printf("Befor	>>	a = %d, b = %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After	>>	a = %d, b = %d\n", num1, num2);
}
