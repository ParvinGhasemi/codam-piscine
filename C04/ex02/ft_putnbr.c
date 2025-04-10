/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 14:32:01 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/10 17:47:10 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nums(long number)
{
	if (number > 9)
		print_nums(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

void	print_nums_v2(long num)
{
	char	digit;

	if (num > 9)
		print_nums(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = (long) nb;
	if (num < 0)
	{
		num = -num;
		ft_putchar('-');
	}
	print_nums_v2(num);
}
