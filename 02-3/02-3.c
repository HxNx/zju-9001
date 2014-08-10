#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a = 0;
	scanf("%d", &a);

	a = (a%10)*100 + (a/10-a/100*10)*10 + a/100;

	printf("%d\n", a);

	return 0;
}