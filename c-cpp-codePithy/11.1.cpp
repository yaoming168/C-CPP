#include <stdio.h>
void f(int val);

void f(int i)
{
	printf("i == %d\n", i);
	{
		int j = 10;
		int i = j;
		printf("i == %d\n", i);
	}
}
int main()
{
	f(1);
	return 0;
}