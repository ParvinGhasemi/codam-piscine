/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/29 01:24:43 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/29 01:54:19 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_num(int num);
void	ft_putnbr(int num);

int	main(void)
{
	ft_putnbr(-1234);
	printf("\n\n");
	ft_putnbr(-2147483648);
	printf("\n\n");
	ft_putnbr(98765);
	printf("\n");
	return (0);
}
