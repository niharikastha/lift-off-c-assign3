#include<stdio.h>
int long fact(int);
int main()
{
	int n;
	printf("enter the no to find the factorial : ");
	scanf("\n %d", &n);
	printf("\nFactorial = %d", fact(n));
}
int long fact(int x)
{
	if (x==0)
	return 1;
	else
	return(x * fact(x-1));
}
