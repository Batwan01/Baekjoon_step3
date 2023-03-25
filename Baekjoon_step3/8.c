#include <stdio.h>

int main()
{
	int a=1, b=1,i=0,j=0;
 	int arr[100] = { 0 };
	while (a != 0 && b != 0)
	{
		scanf_s("%d %d", &a, &b);
		arr[i] = a + b;
		i++;
	}
	for (j; j < i-1; j++)
	{
		printf("%d\n", arr[j]);
	}
}