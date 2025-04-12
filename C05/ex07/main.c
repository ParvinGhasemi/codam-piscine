/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/13 01:07:56 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/13 01:11:34 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	num;

	num = 30;
	printf("first prime num after %d? >> %d\n", num, ft_find_next_prime(num));
	num = 2;
	printf("first prime num after %d? >> %d\n", num, ft_find_next_prime(num));
	num = 1;
	printf("first prime num after %d? >> %d\n", num, ft_find_next_prime(num));
	num = 19;
	printf("first prime num after %d? >> %d\n", num, ft_find_next_prime(num));
	num = 0;
	printf("first prime num after %d? >> %d\n", num, ft_find_next_prime(num));
	num = -5;
	printf("first prime num after %d? >> %d\n", num, ft_find_next_prime(num));
	return (0);
}
