/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 14:59:13 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/01 01:01:58 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	is_lower = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
		{
			is_lower = 0;
			return (is_lower);
		}
	}
	return (is_lower);
}
