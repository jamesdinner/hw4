#include<stdio.h>

double Power(double, int);
void main(void)
{
	int k; 
	double Ans;
	printf("�p��3.5��k����?��Jk=");
	scanf("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5��%d����=%f\n", k, Ans);
}
double Power(double x, int n)
{
	int i;
	double p=1;
	for (i = 1; i <= n; i++)
		p = p * x;
	return p;
}