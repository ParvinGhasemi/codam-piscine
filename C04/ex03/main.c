/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/10 17:49:35 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/10 17:55:06 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;

	str = " 	 -+---+---+1234ab567";
	printf("start:\"%s\"	>>	%d", str, ft_atoi(str));
}
/*
$>./a.out " ---+--+1234ab567"
-1234
*/
