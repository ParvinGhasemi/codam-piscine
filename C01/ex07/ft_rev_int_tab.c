/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/25 11:01:26 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/03/31 21:30:07 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	last;
	int	i;

	last = size - 1;
	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[last - i]);
		i++;
	}
}
