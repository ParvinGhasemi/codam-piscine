/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/08 20:07:18 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/13 01:17:13 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	write(1, str, count);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc >= 0)
		ft_print_str(argv[0]);
	return (0);
}
