#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number.";
	cin>>n;
	while(n!=0)
	{
		cout<<"sqare of "<<n<<"="<<n*n<<endl;
		cout<<"enter a  number (0 to exit)";
		cin>>n;
	}
	cout<<"good bye ";
}
