/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/05 00:23:44 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/05 05:19:11 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	text[] = "salut, comment tu vas ? 42mots \
		quarante-deux; cinquante+et+un";

	printf("text	>>	%s\n", text);
	printf("changed	>>	%s\n", ft_strcapitalize(text));
	return (0);
}
// text:	salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
// result:	Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
