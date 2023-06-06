//display degree to radian tabel using while loop
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	int degrees=0;
	double radians;
	cout<<"degree to radian \n";
	while(degrees<=360)
	{
		radians=degrees*3.141/180;
	cout<<degrees<<" "<<radians<<endl;
	degrees+=10;
}
	
	return 0;
	
}
