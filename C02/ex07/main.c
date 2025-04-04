/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/05 00:08:31 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/05 00:12:25 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	string[] = "bye & Hello 0-42";

	printf("original	>>	 %s\n", string);
	printf("UPPERCASED	>>	%s\n", ft_strupcase(string));
}
