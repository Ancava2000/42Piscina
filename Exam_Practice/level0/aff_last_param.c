#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc < 2)
		write(1, "\n", 1);
	else
	{
		while(*argv[argc - 1] != '\0')
		{
			write(1, argv[argc -1]++, 1);
		}
		write(1, "\n", 1);
		return(0);
	}
}
