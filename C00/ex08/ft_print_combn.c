/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 14:30:00 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/29 15:49:28 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_last_combination(int comb[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (comb[i] != 10 - n + i)
			return (0);
		i++;
	}
	return (1);
}

void	print_combination(int comb[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
	if (!is_last_combination(comb, n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	print_combn_rec(int n, int pos, int comb[])
{
	int	i;
	int	start;

	if (pos == n)
	{
		print_combination(comb, n);
		return ;
	}
	if (pos == 0)
		start = 0;
	else
		start = comb[pos - 1] + 1;
	i = start;
	while (i <= 9)
	{
		comb[pos] = i;
		print_combn_rec(n, pos + 1, comb);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	print_combn_rec(n, 0, comb);
}
