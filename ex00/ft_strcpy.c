#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

char	*ft_strcpy(char*dest,char*src)
{
	while(src[i])
	{
		dest[i] = src [i];
	}
	dest[i] = '\0';
	return dest;
