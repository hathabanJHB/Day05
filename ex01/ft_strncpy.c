#include <unistd.h>

char 	*ft_strncpy(char *dest, char src, unisigned int n)
{
	int len;

	len = 0;
	while ( len <= n)
	{
		dest[len] = src[len]
			++len;
	}
	return len;
}
