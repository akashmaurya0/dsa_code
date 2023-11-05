#include<iostream>
using namespace std;
int& update(int &x)
{
	x++;
	int &p=x;
	p++;
	return p;
}
int main()
{
	int x;
	cout<<" enter a ineger ->";
	cin>>x;
	int k=update(x);
	cout<<"\n Afer updation->";
	cout<<x<<endl;
	
}
