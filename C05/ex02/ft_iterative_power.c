/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 14:02:34 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/12 04:35:16 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
