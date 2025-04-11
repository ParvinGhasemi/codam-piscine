/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/10 17:56:57 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/10 18:36:44 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		base_len;
	long	num;

	num = nb;
	if (!is_base_valid(base))
		return ;
	base_len = ft_strlen(base);
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= base_len)
		ft_putnbr_base(num / base_len, base);
	ft_putchar(base[num % base_len]);
}
