#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	result = 0;
	while (str[i] != '\0')
	{
		result = (result + str[i] - '0') * 10;
		i++;
	}
	return (result * sign / 10);
}
