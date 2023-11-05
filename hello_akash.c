#include<stdio.h>
int main()
{
	int array[7]={0,1,2,3,1,4,5};
     int size=7,i,result=0;
     int tsum=0,asum=0,lost=-1;
     tsum=(size-1)*size/2;
     for(i=0;i<size;i++)
     { asum+=array[i];
     	result=result^array[i];
	 }
	 for(i=0;i<6;i++)
	 {
	 	result=result^i;
	 }
	 printf("duplicate is  -> %d\n",result);
	 
	lost=asum-result;
	lost=tsum-lost;
	printf("missing number is -> %d",lost);
}
