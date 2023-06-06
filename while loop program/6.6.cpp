// inputb a integer and display sum of it digits     the program should display 9  using while loop
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	int rem;
	cout<<"enter the number";
	cin>>num; /*123*/
	while(num) 
	{
	rem=num%10;    /*rem=123%10=3*/     /*rem=12%10=2*/    /*rem=1%10=1*/    
     sum=sum+rem;  /*sum=0+3*/          /*sum=3+2*/             /*sum=5+1*/\
     num=num/10;   /*num=123/10=12*/   /*  num=12/10=12 =1 */   /*  num=1/10=0 */
      
   }
   cout<<"sum"<<sum;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
