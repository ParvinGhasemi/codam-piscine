/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/12 04:56:49 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/12 05:04:00 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	num;

	num = 81;
	printf("sqrt(%d)	= %d\n", num, ft_sqrt(num));
	num = 1;
	printf("sqrt(%d)	= %d\n", num, ft_sqrt(num));
	num = 51;
	printf("sqrt(%d)	= %d\n", num, ft_sqrt(num));
	num = -3;
	printf("sqrt(%d)	= %d\n", num, ft_sqrt(num));
	return (0);
}
