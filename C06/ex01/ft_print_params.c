/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/08 20:07:25 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/13 01:23:13 by parvinm.gha   ########   odam.nl         */
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
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_print_str(argv[i]);
		i++;
	}
	return (0);
}
// ./a.out test1 test2 test3 | cat -e
