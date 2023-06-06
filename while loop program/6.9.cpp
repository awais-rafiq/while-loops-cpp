//display the sum of following series using while loop
#include<iostream>
using namespace std;
int main()
{
	float c,r;
	c=2;
	r=1;
	while(c<=100)
	{
		r=r+1/c;
		c=c+2;
	}
	cout<<"the result is  "<<r;
	return 0;
	
}
