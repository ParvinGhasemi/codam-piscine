/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 14:29:25 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/08 22:36:21 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// or instead of line 27, you could also say:
// return(str + i);
//or doing it completely another way:
// char	*ft_strstr(char *str, char *to_find)
// {
// 	char	*ptr_str;
// 	char	*ptr_find;
// 	if (!*to_find)
// 		return (str);
// 	while (*str)
// 	{
// 		ptr_str = str;
// 		ptr_find = to_find;
// 		while (*ptr_str && *ptr_find && *ptr_str == *ptr_find)
// 		{
// 			ptr_str++;
// 			ptr_find++;
// 		}
// 		if (!*ptr_find)
// 			return (str);
// 		str++;
// 	}
// 	return (0);
// }
