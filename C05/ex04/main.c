/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/12 04:45:26 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/12 04:53:30 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	idx;

	idx = 10;
	printf("fib(%d) = %d\n", idx, ft_fibonacci(idx));
	idx = 3;
	printf("fib(%d) = %d\n", idx, ft_fibonacci(idx));
	idx = 5;
	printf("fib(%d) = %d\n", idx, ft_fibonacci(idx));
	idx = 6;
	printf("fib(%d) = %d\n", idx, ft_fibonacci(idx));
	idx = -3;
	printf("fib(%d) = %d\n", idx, ft_fibonacci(idx));
	idx = 1;
	printf("fib(%d) = %d\n", idx, ft_fibonacci(idx));
	idx = 0;
	printf("fib(%d) = %d\n", idx, ft_fibonacci(idx));
	return (0);
}
