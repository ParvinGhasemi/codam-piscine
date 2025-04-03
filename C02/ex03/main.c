/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/01 00:55:22 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/03 04:05:58 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	mystr[] = "12345872643";
	printf("Is %s all digits??	[0: No & 1: Yesss!]\
	>>	%d\n", mystr, ft_str_is_numeric(mystr));
}
