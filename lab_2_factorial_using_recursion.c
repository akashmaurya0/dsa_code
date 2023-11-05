#include<stdio.h>
int factorial(int x)
{
	if(x==0||x==1)
	return 1;
	else
	return (x*factorial(x-1));
}
int main()
{
	int x;
	printf("enter a number to find its factorial->");
	scanf("%d",&x);
	if(x<0)
	{
		printf("input value can not be less then 0\n");
	}
	else
	{
	  printf("factorial of %d is : %d",x,factorial(x))	;
	}
	
}
