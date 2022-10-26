#include<stdio.h>

double Power(double, int);
void main(void)
{
	int k; 
	double Ans;
	printf("計算3.5的k次方?輸入k=");
	scanf("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n", k, Ans);
}
double Power(double x, int n)
{
	int i;
	double p=1;
	for (i = 1; i <= n; i++)
		p = p * x;
	return p;
}