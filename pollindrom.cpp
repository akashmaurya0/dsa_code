#include<iostream>
using namespace std;
int main()
{
	int x,k,r,s=0;
	cout<<"enter a number";
	cin>>x;
k=x;
    while(k)
    {
    	r=k%10;
    	s=s*10+r;
    	k=k/10;
	}
	if(s==x)
	{
		cout<<"Yes";
		
	}
	else
	cout<<"no";
}
