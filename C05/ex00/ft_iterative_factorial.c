/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 19:12:35 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/12 04:13:15 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fac = 1;
	while (nb)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
