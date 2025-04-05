/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/05 00:23:37 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/05 05:43:34 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alnum(char character)
{
	return ((character >= '0' && character <= '9')
		|| (character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'));
}

int	ft_is_new_word(char *str, int i)
{
	if (i == 0)
		return (1);
	return (!ft_is_alnum(str[i - 1]));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (ft_is_new_word(str, i) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!ft_is_new_word(str, i)
				&& (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
