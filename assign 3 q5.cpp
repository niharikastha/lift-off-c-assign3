#include<stdio.h>
int pal(int);
int n;
int main()
{
	printf("enter the no.");
	scanf("\n %d \n", &n);
	if (pal(n)==1)
	{
		printf("palindrome no.");
	}
	else
	{
		printf("not a palindrome no.");
	}
	return 0;
}

int pal(int x)
{
	 static int sum = 0;
	 if ( x != 0)
	 {
	 	sum = sum *10 + x%10;
	 }
	 else if (sum == n)
	 {
	 	return 1;
	 }
	 else
	 {
	 	return 0;
	 }
}
