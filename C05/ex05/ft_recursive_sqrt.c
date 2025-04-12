/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive-sqrt.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 18:13:11 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/13 00:58:36 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// this is a recursive way that I tried for myself.
// if you want to write it recursive, be careful of
// what you're pushing to the git repo.
#include <stdio.h>

int	ft_sqrt_recursive(int nb, int i)
{
	if (i * i == nb)
		return (i);
	if (i * i > nb)
		return (0);
	return (ft_sqrt_recursive(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursive(nb, 0));
}

int	main(void)
{
	int	num;

	num = 81;
	printf("sqrt(%d) = %d\n", num, ft_sqrt(num));
	return (0);
}
