/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 20:09:25 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/13 01:08:55 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int num)
{
	int	div;
	int	till_div;

	div = 2;
	till_div = num / 2;
	if (num <= 1)
		return (0);
	while (div <= till_div)
	{
		if (num % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
