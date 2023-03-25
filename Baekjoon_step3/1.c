#include <stdio.h>

int main()
{
	int i,t,a=0,b=0;
	scanf_s("%d", &t);
	int arr[100] = {0};
	for (i=0; i < t; i++)
	{
		scanf_s("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0; i < t; i++)
	{
		printf("%d\n",arr[i]);
	}
}