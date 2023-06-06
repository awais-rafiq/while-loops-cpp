// dispaly first five numbers and their sum  using while loop
#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int n=1;
	while(n<=5)
	{
		cout<<n<<endl;
		sum=sum+n;
		n++;
    } 
		cout<<"sum is "<<sum<<endl;
   
}
