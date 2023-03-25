#include <stdio.h>

int main()
{
	int n,s=0,i=0;
	scanf_s("%d", &n);
	for (i; i <= n; i++)
	{
		s += i;
	}
	printf("%d", s);
}