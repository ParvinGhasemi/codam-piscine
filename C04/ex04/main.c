/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/10 17:56:15 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/10 18:32:56 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nb, char *base);
void	ft_putchar(char character);

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(5, "01");
	ft_putchar('\n');
	ft_putnbr_base(11, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(3, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(77, "0123456789ABCDEF");
	ft_putchar('\n');
	return (0);
}
