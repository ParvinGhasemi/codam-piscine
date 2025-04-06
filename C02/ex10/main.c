/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/06 19:22:01 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/06 20:19:34 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			source[] = "0123456";
	char			dest[] = "111";
	unsigned int	source_len;

	printf("Before:\nsource	: %s\ndest	: %s\n\n", source, dest);
	source_len = ft_strlcpy(dest, source, 12);
	printf("After:\nsource	: %s\ndest	: %s\n%d\n", source, dest, source_len);
	return (0);
}
