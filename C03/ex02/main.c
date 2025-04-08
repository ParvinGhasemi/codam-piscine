/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 21:44:13 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/08 21:51:30 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[50] = "Hello";

	src = " World!";
	printf("Before:\ndest   >>  %s\nsrc   >>  %s\n", dest, src);
	ft_strcat(dest, src);
	printf("After:\ndest   >>  %s\nsrc   >>  %s\n", dest, src);
	return (0);
}
