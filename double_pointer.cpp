#include<iostream>
using namespace std;
int main()
{
	int i=9;
	int *ptr=&i;
	int **ptr2=&ptr;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<*ptr2<<endl;
	cout<<"ab maza aayi guru->"<<endl;
	cout<<i<<endl;
	cout<<*ptr<<endl;
	cout<<*(*ptr2)<<endl;
	
}
