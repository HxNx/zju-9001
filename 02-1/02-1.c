#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a = 0;
	int feet, inch;

	scanf("%d", &a);

	feet = (int) (a/30.48);
	inch = (int) ((a/30.48 - feet)*12);

	printf("%d %d\n", feet, inch);

	return 0;
}
