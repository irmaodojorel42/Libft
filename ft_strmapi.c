/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:34:22 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:34:22 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

int main(void)
{
    char *result;
    const char *input = "Hello World!";
    
    result = ft_strmapi(input, &ft_myfunc);
    if (result != NULL)
    {
        printf("Input string: %s\n", input);
        printf("Output string: %s\n", result);
        free(result);
    }
    else
		printf("Error: ft_strmapi returned NULL\n");
    
    return 0;
}*/
