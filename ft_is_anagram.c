#include "libft/libft.h"

int ft_place_is_free(int nb, char *array)
{
	if (array[nb] == 0)
		return (1);
	return (0);
}

int		ft_is_anagram(char *word, char *candidate)
{
	int		i;
	int		y;
	char	taken[20];

	i = 0;
	ft_memset(taken, 0, 20);
	while (word[i])
	{
		y = 0;
		while (candidate[y])
		{
			if (word[i] == candidate[y] && ft_place_is_free(y, &taken[0]))
			{
				taken[y] = 1;
				break;
			}
			y++;
		}
		if (!candidate[y])
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	(void)ac;

	if (ac != 3)
		return (0);
	if (ft_is_anagram(av[1], av[2]))
		printf("oui :%d");
	else
		printf("non :%d");
	return (0);
}
					
