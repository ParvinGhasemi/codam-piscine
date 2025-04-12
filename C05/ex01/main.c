/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/12 04:16:06 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/12 04:17:01 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	num;

	num = 10;
	printf("%d!	>>	%d\n\n", num, ft_recursive_factorial(num));
	num = 5;
	printf("%d!	>>	%d\n\n", num, ft_recursive_factorial(num));
	num = 6;
	printf("%d!	>>	%d\n\n", num, ft_recursive_factorial(num));
	num = -5;
	printf("%d!	>>	%d\n\n", num, ft_recursive_factorial(num));
	num = 0;
	printf("%d!	>>	%d\n\n", num, ft_recursive_factorial(num));
	num = 1;
	printf("%d!	>>	%d\n\n", num, ft_recursive_factorial(num));
	num = 2;
	printf("%d!	>>	%d\n\n", num, ft_recursive_factorial(num));
}
