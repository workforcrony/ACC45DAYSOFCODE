/* WAP in C++ to display the operation of pre and post increment and decrement.
Sample Output:
Display the operation of pre and post increment and decrement :
--------------------------------------------------------------------
The number is : 57
After post increment by 1 the number is : 58
After pre increment by 1 the number is : 59
After increasing by 1 the number is : 60
After post decrement by 1 the number is : 59
After pre decrement by 1 the number is : 58
After decreasing by 1 the number is : 57
*/
#include<iostream>
using namespace std;
int main()
{
	int num=57;
	
	cout<<"Display the operation of pre and post increment and decrement :"<<endl;
	cout<<"The number is :"<<num<<endl;
	num++;															// (post increment)
	cout<<"After post increment by 1 the number is :"<<num<<endl;	
	++num;															// (pre increment)
	cout<<"fter pre increment by 1 the number is :"<<num<<endl;		
	num=num+1;
	cout<<"After increasing by 1 the number is :"<<num<<endl;
	num--;
	cout<<"After post decrement by 1 the number is :"<<num<<endl;
	--num;
	cout<<"After pre decrement by 1 the number is :"<<num<<endl;
	num=num-1;
	cout<<"After decreasing by 1 the number is :"<<num<<endl;
	return 0;
}

