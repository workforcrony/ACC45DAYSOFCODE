/*Write a program in C++ to find Size of fundamental data types.
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes */

#include<iostream>
using namespace std;
int main()
{
	cout<<"char size: "<<sizeof(char)<<endl;
	cout<<"short size: "<<sizeof(short)<<endl;
	cout<<"int size: "<<sizeof(int)<<endl;
	cout<<"long size: "<<sizeof(long)<<endl;
	cout<<"long long size: "<<sizeof(long long)<<endl;
	cout<<"float size: "<<sizeof(float)<<endl;
	cout<<"double size: "<<sizeof(double)<<endl;
	cout<<"long double size: "<<sizeof(long double)<<endl;
	cout<<"bool size: "<<sizeof(bool)<<endl;
	
	return 0;
}

