/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/06 20:24:38 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/06 20:47:46 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*hexa;
	unsigned char	c;
	int				i;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = (unsigned char) str[i];
		if (c >= 32 && c <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hexa[c / 16], 1);
			write(1, &hexa[c % 16], 1);
		}
		i++;
	}
}
