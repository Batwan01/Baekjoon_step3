#include <stdio.h>

int main()
{
	signed int sum=0;
	int try = 0, a, b,i=1;
	int arr[100] = { 0 };
	scanf_s("%d %d", &sum, &try);
	for (i; i <= try; i++)
	{
		scanf_s("%d %d", &a, &b);
		arr[i] = a * b;
		arr[0] += arr[i];
	}
	if (arr[0] == sum) printf("Yes");
	else printf("No");
}