/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/13 01:01:12 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/13 01:05:56 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int num);

int	main(void)
{
	int	num;

	num = 30;
	printf("Is %d prime? %d\n", num, ft_is_prime(num));
	num = 2;
	printf("Is %d prime? %d\n", num, ft_is_prime_recursive(num));
	num = 7;
	printf("Is %d prime? %d\n", num, ft_is_prime(num));
	num = 19;
	printf("Is %d prime? %d\n", num, ft_is_prime(num));
	return (0);
}
