#include<stdio.h>
int sqrt(int);
void main()
{
	int n;
	printf("Enter the number to find the square root: ");
	scanf("%d",&n);
    printf("\n Square root of the number : %d ", sqrt(n));
}

int sqrt(int x)
{
	int sq;
	sq = x*x;
	return (sq);
}
