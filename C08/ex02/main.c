/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/30 22:29:44 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/30 22:33:00 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = -42;
	num2 = 0;
	num3 = 42;
	printf("ABS(%d) = %d\n", num1, ABS(num1));
	printf("ABS(%d) = %d\n", num2, ABS(num2));
	printf("ABS(%d) = %d\n", num3, ABS(num3));
	return (0);
}
