/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 02:53:30 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/31 02:53:33 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 0;
	div = 0;
	mod = 0;
	printf("Befor >> a = %d, b = %d, div = %d, mod = %d\n\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("After >> a = %d, b = %d, div = %d, mod = %d\n\n", a, b, div, mod);
	return (0);
}
