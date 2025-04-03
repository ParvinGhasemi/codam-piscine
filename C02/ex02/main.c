/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/01 00:49:06 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/03 03:59:43 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*my_str;

	my_str = "Hisdrgcbdkeronwkjdsgfkj";
	printf("Is %s all alphabets?	0: No & 1: Yesss!\
	>>	%d\n", my_str, ft_str_is_alpha(my_str));
}
