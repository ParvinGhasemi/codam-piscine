/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 08:53:19 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/03/29 01:34:44 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(char num1, char num2, char num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '9')
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_print_nums(num1, num2, num3);
				if (!(num1 == '7' && num2 == '8' && num3 == '9'))
					write(1, ", ", 2);
				++num3;
			}
			++num2;
		}
		++num1;
	}
}
