//input a number and check whether it is an armstrong number on not 
//  armstong = sum of cube of its digits is equal to the number itself;
#include<iostream>
using namespace std;
int main()
{
	int num,n,r;
	int sum=0;
	
	cout<<"enter the number ";
	cin>>num;
	 n=num;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
        n=n/10;		
	}
	if(sum==num)
	cout<<num<<" is an armstrong number "<<endl;
	else
	cout<<num<<" is not armstrong number "<<endl;
	return 0;
	
}
