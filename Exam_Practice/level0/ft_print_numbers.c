#include <unistd.h>
void aa(void)
{
	write(1, "0123456789\n", 11);
}
int main(void)
{
	aa();
	return(0);
}

