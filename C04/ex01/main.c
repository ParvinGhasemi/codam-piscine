/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/10 17:11:18 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/10 17:18:28 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*my_str;

	my_str = "Hi There!";
	ft_putstr(my_str);
	return (0);
}
