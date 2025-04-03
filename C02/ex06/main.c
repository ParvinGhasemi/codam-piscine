/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/01 01:08:05 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/03 16:19:36 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char string[] = "H~   !@)(*$&{}[])";

	printf("Is %s all printable?	0: No & 1: Yesss!\
	>>	%d\n", string, ft_str_is_printable(string));
}
