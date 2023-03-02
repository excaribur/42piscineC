#include<unistd.h>

int main(void)
{
	int a = 66;
	int a1 = 9;
	char b = 'c';

	write(1, &a, 1);
	write(1, &a1, 1);
	write(1, &b, 1);
	return 0;
}
