/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 20:53:17 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/31 21:00:27 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*my_str;

	my_str = "Smile";
	printf("Length of the string \"%s\" is >> %d\n", my_str, ft_strlen(my_str));
	return (0);
}
