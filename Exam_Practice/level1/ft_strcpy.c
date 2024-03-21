#include <unistd.h>
char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return(s1);
}
int main(void)
{
	char b[] = "hola";
	char j[] = "mundo";
	ft_strcpy(b, j);
	write(1, &b, 5);
	return(0);
}
