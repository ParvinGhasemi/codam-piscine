/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/12 04:33:31 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/12 04:34:48 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("4^4   = %d\n\n", ft_recursive_power(4, 4));
	printf("-4^4  = %d\n\n", ft_recursive_power(-4, 4));
	printf("-4^3  = %d\n\n", ft_recursive_power(-4, 3));
	printf("4^-4  = %d\n\n", ft_recursive_power(4, -4));
	printf("0^0   = %d\n\n", ft_recursive_power(0, 0));
	printf("56^0  = %d\n\n", ft_recursive_power(56, 0));
	printf("44^1  = %d\n\n", ft_recursive_power(44, 1));
	printf("0^5   = %d\n\n", ft_recursive_power(0, 5));
}
