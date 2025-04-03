/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/01 01:04:12 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/03 16:28:50 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*string;

	string = "AAAA";
	printf("Is %s all uppercase?	0: No & 1: Yesss!\
	>>	%d\n", string, ft_str_is_uppercase(string));
}
