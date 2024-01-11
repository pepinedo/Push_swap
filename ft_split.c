/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:18:08 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/11 16:54:19 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_wordscount(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != 0)
				j++;
		}
		i++;
	}
	return (j);
}

static void	ft_freeall(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	ft_splitaux(char **splits, char const *s, char c)
{
	int		i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != 0)
			i++;
		if (start < i)
		{
			splits[j] = ft_substr(s, start, (i - start));
			if (splits[j] == NULL)
				ft_freeall(splits);
			j++;
		}
	}
	splits[j] = NULL;
}

char	**ft_split(char const *s, char separator)
{
	char	**splits;

	splits = (char **)malloc(sizeof(char *) * (ft_wordscount(s, separator) + 1));
	if (splits == 0)
		return (0);
	ft_splitaux(splits, s, separator);
	return (splits);
}

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		printf("error");
		return(0);
	}
	ft_split(argv[1], ' ');	
}