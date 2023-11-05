#include<stdio.h>
int isOk(int n)
{
	if(n<=0)
	return 0;
	else
	{
		while(n)
		{   if(n==1)
	        return 1;
			if(n%4==0)
			{
			n=n/4;	
			}
		else return 0;
	}
	}
}
int main()
{
	int n;
	printf("enter a number ");
	scanf(" %d",&n);
	int result=isOk(n);
	if(result==1)
	{
		printf("yes");
	}
	else 
	printf("no");
	
}
