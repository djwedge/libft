#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t	index;
	char	*dest;

	index = 0;
	dest = (char*)malloc(sizeof(*dest) * (ft_strlen(src) + 1));
	if (dest == 0)
		return (NULL);
	while (index < ft_strlen(src))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
