/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/29 01:22:08 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/29 01:26:25 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	decimal_base;

	decimal_base = 10;
	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			write(1, &"0123456789"[num1 / decimal_base], 1);
			write(1, &"0123456789"[num1 % decimal_base], 1);
			write(1, " ", 1);
			write(1, &"0123456789"[num2 / decimal_base], 1);
			write(1, &"0123456789"[num2 % decimal_base], 1);
			if (!(num1 == 98 && num2 == 99))
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
	write(1, "\n", 1);
}
