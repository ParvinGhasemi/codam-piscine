/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:30:35 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/13 00:51:45 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 0;
	while (num <= nb)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}
