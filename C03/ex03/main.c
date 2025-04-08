/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 21:54:40 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/08 22:10:35 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[50] = "Hello";
	char	*src = "_World!";
	char	*new_dest;

	printf("Before:\n	dest   >>  %s\n	src   >>  %s\n", dest, src);
	new_dest = ft_strncat(dest, src, 3);
	printf("After:\n	dest   >>  %s\n	src   >>  %s\n", new_dest, src);
	return (0);
}
