/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 20:59:37 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/08 21:26:28 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int		diff;
	char	first_str[] = "";
	char	second_str[] = "";

	diff = ft_strcmp(first_str, second_str);
	printf("The strmcp	%s vs. %s	=> %d\n", first_str, second_str, diff);
	return (0);
}
