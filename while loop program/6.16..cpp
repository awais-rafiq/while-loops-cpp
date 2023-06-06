#include<iostream>
using namespace std;
int main()
{
	int a,b,next,num;
	cout<<"enter the number.";
	cin>>num;
	if((num==0)||(num==1))
	cout<<num<<"is a fibanocci number.";
	else
	{
		a=0;
		b=1;
		next=a+b;
		while(next<num)
		{
			a=b;
			b=next;
			next=a+b;
		}
		if(next==num)
     cout<<num<<"is a fibonacci number.";
     else
     cout<<num<<"is not a fibanoci number.";
     

	}
}
