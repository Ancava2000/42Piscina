#include <unistd.h>
int ft_strlen(char *str)
{
	int count;
	count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return(count);
}
#include <stdio.h>
int main(void)
{
	char a[] = "me muero";
	printf("%d", ft_strlen(a));
}	
