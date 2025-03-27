#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('A');
	ft_putchar('\n');
	ft_putchar(0);        // NULL character — won't print, but should not crash
	ft_putchar('\n');
	ft_putchar('g');
	ft_putchar('!');      
	ft_putchar('~');
	ft_putchar('\n');
	return (0);
}