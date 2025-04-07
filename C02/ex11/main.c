/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/06 20:31:38 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/06 20:47:23 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	test1[] = "Coucou\ntu vas bien ?";
	char	test2[] = "Hello, world!\nThis is a test.\tTab included.";
	char	test3[] = "\tNon-printable at the beginning.";

	ft_putstr_non_printable(test1);
	write(1, "\n", 1);
	ft_putstr_non_printable(test2);
	write(1, "\n", 1);
	ft_putstr_non_printable(test3);
	write(1, "\n", 1);
	return (0);
}
