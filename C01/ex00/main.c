/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/29 15:57:17 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/29 15:57:31 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nb);

int	main(void)
{
	int	num;

	num = 7;
	printf("before function	>> %d\n", num);
	ft_ft(&num);
	printf("after function	>> %d\n", num);
}
