#include<stdio.h>
int main()
{    int n,i;
    printf("How many number you want to enter->");
    scanf("%d",&n);
    
    	if(n<=0)
    	{
    		printf("please enter at least one value");
    		getch();
    		return 0;
		}
	
    printf("enter %d number for array->",n);
    int array[n];
  for(i=0;i<n;i++)
  {
  	scanf("%d",&array[i]);
  	if(array[i]<0||array[i]>n-1)
  	{printf("invalid input");
  	getch();
  	return 0;
	  }
  }
	int size=n,j,flag=0,result=-1,lost=-1,count=0;
	int tsum=0,asum=0;
	tsum=(size-1)*size/2;
	for(i=0;i<size;i++)
	{ 
	asum+=array[i];
	  
		for(j=i;j<size;j++)
		{
			if(i==j)
			continue;
			if(array[i]==array[j])
		{
			flag=1;
			count++;
			result=array[i];
			
		}
		}
		
	}
	
	if(count>1)
	{
		printf("more than one value is repeated\n");
		return 0;
	}
	if(flag==1)
	{
		printf("duplicate value is -> %d\n",result);
	}
	else
	printf("no duplicate value found\n");
	
//	lost=asum-result;
//	lost=tsum-lost;
lost=tsum-asum+result;
	printf("missing number is -> %d",lost);
}
