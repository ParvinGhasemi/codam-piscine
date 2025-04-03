/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 14:58:39 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/01 00:50:59 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') \
		|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
		{
			is_alpha = 0;
			return (is_alpha);
		}
	}
	return (is_alpha);
}
