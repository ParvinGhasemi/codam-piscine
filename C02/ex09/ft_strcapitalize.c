/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/05 00:23:37 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/05 05:26:47 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((!((str[i - 1] >= '0' && str[i - 1] <= '9')
						|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
						|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
				&& (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (((str[i - 1] >= '0' && str[i - 1] <= '9')
					|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				&& (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
