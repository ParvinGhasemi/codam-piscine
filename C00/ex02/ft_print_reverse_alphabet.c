/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/19 20:55:12 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/03/29 00:34:23 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		--letter;
	}
}
