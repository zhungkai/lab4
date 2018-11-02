#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}
int addbyone(int a)
{
	a++;
	printf("x=%d\n", a);
	return a;
}