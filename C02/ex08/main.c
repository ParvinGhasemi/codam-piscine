/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/05 00:16:10 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/05 00:17:25 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	string[] = "bYe & HeLLO 0-42";

	printf("original	>>	 %s\n", string);
	printf("UPPERCASED	>>	%s\n", ft_strlowcase(string));
}
