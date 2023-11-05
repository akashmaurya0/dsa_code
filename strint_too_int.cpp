#include<iostream>
using namespace std;
int main()
{  int temp=0,i,x,length=0,count=0,sign=1;
	string s;
	cout<<"Enter a string : ";
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		continue;
		else if(s[i]=='-')
	    {
		sign=-1;
	    continue;
      	}
      	// for the mai data 
      	else
      	{
      		if(s[i]>=48&&s[i]<=57)
      	  temp=(temp*10)+(s[i]-48);
			else
			{
			cout<<"pagalau";
			return 0;	
		}
		}
	    }
	    
	
  
   cout<<" temp = "<<sign*temp;


}
