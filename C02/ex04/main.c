/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/01 00:59:36 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/03 16:24:51 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*string;

	string = "hiikk";
	printf("Is %s all lowercase?	0: No & 1: Yesss!\
	>>	%d\n", string, ft_str_is_lowercase(string));
}
