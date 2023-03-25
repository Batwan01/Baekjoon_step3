#include <stdio.h>

int main()
{
	int n, i,j,h;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = n-i-1; j > 0; j--)
		{
			printf(" ");
		}
		for (h = 0; h <= i; h++)
		{
			printf("*");
		}
		printf("\n");
	}	
}