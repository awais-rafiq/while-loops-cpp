// input a number and dispaly tabel using while loop
#include<iostream>
using namespace std;
int main()
{
	int n;
	int x=1;
	cout<<"enter the number";
	cin>>n;
	while(x<=10)
	{
		cout<<n<<"*"<<x<<"="<<n*x<<endl;
		x++;
   }
}
