/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:03:36 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/23 18:12:43 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return(1);
		i++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_separator(str[i], charset))
		i++;
	return (i);
}

int	ft_count_str(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !ft_is_separator(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_word(char *str, char *charset)
{
	int	i;
	int	word_len;
	char	*word;

	i = 0;
	word_len = ft_word_len(str, charset);
	word = (char *)malloc((word_len + 1) * sizeof(char));
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	char	**word;

	i = 0;
	word = (char **)malloc((ft_count_str(str, charset) + 1) * sizeof(char *));
	while (*str != '\0')
	{
		while (*str != '\0' && ft_is_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			word[i] = ft_word(str, charset);
			i++;
		}
		while (*str != '\0' && !ft_is_separator(*str, charset))
			str++;
	}
	word[i] = 0;
	return (word);
}

int main(int argc, char ** argv)
{
	int i;
	char **split;
	(void) argc;

	i = 0;
	split = ft_split(argv[1], argv[2]);
	while (split[i])
	{
		printf("%s \n", split[i]);
		i++;
	}
	return (0);
}
