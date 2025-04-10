/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/10 16:36:49 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/10 16:46:28 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*string;

	string = " _\\* ";
	printf("count characters: |%s|	>>	%d\n", string, ft_strlen(string));
	return (0);
}
