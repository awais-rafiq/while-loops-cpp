#include<iostream>
using namespace std;
int main()
{
	int num;
    int start,end;
	cout<<"enter the starting number";
	cin>>start;
	cout<<"enter the ending number.";
    cin>>end;
    num=start;   /*  then 0 can also be added*/
    while(num<=end)
    {
    	if(num%2==0)
    	cout<<num<<endl;
    	num++;
	}

}
