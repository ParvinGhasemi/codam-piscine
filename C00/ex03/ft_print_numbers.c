/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 08:41:26 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/03/29 00:36:51 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
