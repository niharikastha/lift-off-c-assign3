#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter the number to find the factorial : \n");
	scanf("%d",&n);
	printf("\n factorial = %d", fact(n));
}

int fact(int x)
{
	int i,f = 1;
	for(i= x ; i>=1; i--)
	{
		f = f*i;
	}
	return (f);
}
