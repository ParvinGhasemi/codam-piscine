/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 15:00:17 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/03 16:21:36 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
		{
			is_printable = 0;
			return (is_printable);
		}
	}
	return (is_printable);
}
