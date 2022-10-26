/*
WAP in C++ to check overflow/underflow during various arithmetical operation.
Sample Output:
Check overflow/underflow during various arithmetical operation :
Range of int is [-2147483648, 2147483647]
---------------------------------------------------------------------
Overflow the integer range and set in minimum range : -2147483648
Increasing from its minimum range : -2147483647
Product is :1
Underflow the range and set in maximum range : 2147483647
Decreasing from its maximum range : 2147483646
Product is : 0 
*/

#include<iostream>
using namespace std;
int main()
{
	int max=2147483647;
	int min=-2147483648;
	cout<<"Range of int is [-2147483648, 2147483647]"<<endl;
	cout<<"Overflow the integer range and set in minimum range: "<<max+1<<endl;
	cout<<"Increasing from its minimum range :"<<max+2<<endl;
	cout<<"Product is :"<< max*max <<endl;
	cout<<"Underflow the range and set in maximum range :"<<min-1<<endl;
	cout<<"Decreasing from its maximum range :"<<min-2<<endl;
	cout<<"Product is :"<< min*min <<endl;
	return 0;
}

