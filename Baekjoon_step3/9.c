#include <stdio.h>

int main()
{
	int a = 0, b = 0, i = 0, j = 0;
	int arr[100] = { 0 };
	while (scanf_s("%d %d", &a, &b) != EOF)
	{
		arr[i] = a + b;
		i++;
	}
	for (j; j < i; j++)
	{
		printf("%d\n", arr[j]);
	}
}