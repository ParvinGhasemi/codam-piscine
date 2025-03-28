/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/19 14:37:03 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/03/28 23:56:03 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
