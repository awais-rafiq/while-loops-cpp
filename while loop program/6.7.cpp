////input a number from user  and display thr factorial of a number of that numbetr using while loop
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	int c=1;
//	int f=1;
//	
//	cout<<"enter the number ";
//	cin>>num;
//	while(c<=num)
//	{
//		f=f*c;
//		c++;
//	}
//	cout<<"the factorial of a "<<num<<" is "<<f;
//	return 0;
//	
//}

//input a number from user  and display thr factorial of a number of that numbetr using while loop
#include<iostream>
using namespace std;
int main()
{
	int num;
	int c=1;
	int f=1;
	
	cout<<"enter the number ";
	cin>>num;
	while(c<=num)
	{
		f=f*c;
		c++;
	}
	cout<<"the factorial of a "<<num<<" is "<<f;
	return 0;
	
}
