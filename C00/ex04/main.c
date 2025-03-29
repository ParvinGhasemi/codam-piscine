/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/29 00:37:38 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/29 01:05:58 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num);

int	main(void)
{
	int	num;

	num = -123456;
	write(1, "-123456 is >> ", 14);
	ft_is_negative(num);
	write(1, "\n", 1);
	num = 123456;
	write(1, "123456 is >> ", 13);
	ft_is_negative(num);
	write(1, "\n", 1);
	num = 0;
	write(1, "0 is >> ", 8);
	ft_is_negative(num);
	write(1, "\n", 1);
	num = -12;
	write(1, "-12 is >> ", 10);
	ft_is_negative(num);
	write(1, "\n", 1);
	num = 42;
	write(1, "42 is >> ", 9);
	ft_is_negative(num);
	write(1, "\n", 1);
	return (0);
}
