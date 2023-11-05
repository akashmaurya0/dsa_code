#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m[10]={12,3,23,2,34,2,3,7,67,36};
	int *p=&m[0];
	cout<<"address of m is ->"<<*(p+1);
}
