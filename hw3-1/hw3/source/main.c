#include<stdio.h>

int maximum(int, int, int);
int main(void)
{
	int n1;
	int n2;
	int n3;
	printf("enter three integers : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("maximum is %d", maximum(n1, n2, n3));
}

int maximum(int a, int b, int c)
{
	int max;
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}