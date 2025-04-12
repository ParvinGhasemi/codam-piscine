/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 18:57:56 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/13 01:05:05 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int num)
{
	int	div;
	int	till_div;

	if (num <= 1)
		return (0);
	div = 2;
	till_div = num / 2;
	while (div <= till_div)
	{
		if (num % div == 0)
			return (0);
		div++;
	}
	return (1);
}

// int	recursive_helper(int num, int div)
// {
// 	if (div > num / 2)
// 		return (1);
// 	if (num % div == 0)
// 		return (0);
// 	return (recursive_helper(num, div + 1));
// }

// int	ft_is_prime_recursive(int num)
// {
// 	if (num <= 1)
// 		return (0);
// 	return (recursive_helper(num, 2));
// }
