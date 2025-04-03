/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 14:58:55 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/03 04:04:04 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			is_numeric = 0;
			return (is_numeric);
		}
	}
	return (is_numeric);
}
