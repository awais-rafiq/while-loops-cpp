#include<iostream>
using namespace std;
int main()
{
  int num;
  int sum=0;
  float avg,min,max;
  cout<<"enter the positive number.";
  cin>>num;
  min=num;
  max=num;
  int count=0;
  while(num>=0)	
  {
  	sum=sum+num;
  	count++;
  	if(num>max)
    max=num;
    else if(num<min)
    min=num;
    cout<<"enter the positive number.";
    cin>>num;
  }
  if(count==0)
  cout<<"no positive number enetred."<<endl;
 else
{
	avg=sum/count;
    cout<<"you entered"<<count<<"numbers."<<endl;
	cout<<"average is "<<avg<<endl;
	cout<<"minimum ="<<min<<endl;
	cout<<"maximum = "<<max<<endl;	
 }
}
