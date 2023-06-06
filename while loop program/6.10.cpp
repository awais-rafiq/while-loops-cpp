//input a number from user  and display thr factorial of a number of that numbetr using while loop
#include<iostream>
using namespace std;
int main()
{
	int num;
	int evensum=0,oddsum=0;
	cout<<"enter a positive number ";
	cin>>num;
	while(num>=0)
	{
		if(num%2==0)
		evensum=evensum+num;
		else
		oddsum=oddsum+num;
		num--;
	}
	cout<<"the sum of even digits is "<<evensum<<endl;
	cout<<"the sum of odd digits is "<<oddsum;
	return 0;
	
}
