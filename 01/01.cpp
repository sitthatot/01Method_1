#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	double a, b;
	printf("Enter first number : ");
	scanf("%lf" ,&a);
	printf("Enter second number : ");
	scanf("%lf" ,&b);
	printf("%lf + %lf = %lf\n",a,b,a+b);
	printf("%lf - %lf = %lf\n", a, b, a - b);
	printf("%lf x %lf = %lf\n", a, b, a * b);
	printf("%lf ÷ %lf = %lf\n", a, b, a / b);
	return 0;
}