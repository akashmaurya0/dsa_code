#include<iostream>
using namespace std;
int main()
{
	int x;
	long long reversed=0,r,k;
	cout<<"Enter an integer";
	int a=INT_MIN,B=INT_MAX;
	cin>>x;
	k=x;
	while(k)
	{
		reversed=(reversed*10)+k%10;
		k/=10;
	}
	cout<<reversed;
	
}
