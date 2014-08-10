#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	a = (a / 100) * 60 + a % 100;
	a = a + b;
	b = a % 60;
	if(b == 0)
	{
		printf("%d%d0\n", a / 60, b);
	}
	else
	{
		printf("%d%d\n", a / 60, b);
	}
	
	return 0;
}
