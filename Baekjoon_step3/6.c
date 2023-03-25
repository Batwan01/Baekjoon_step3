#include <stdio.h>

int main()
{
	int a, b, i,try=0;
	int arr[100] = { 0 };
	scanf_s("%d", &try);
	for (i = 0; i < try; i++)
	{
		scanf_s("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0; i < try; i++)
	{
		printf("Case #%d: %d\n", i+1,arr[i]);
	}
}