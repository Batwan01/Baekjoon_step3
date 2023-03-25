#include <stdio.h>

int main()
{
	signed int try=0;
	int a, b,i;
	int arr[1000000] = { 0 };
	scanf_s("%d", &try);
	for (i = 0; i < try; i++)
	{
		scanf_s("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0; i < try; i++)
	{
		printf("%d\n", arr[i]);
	}
}
