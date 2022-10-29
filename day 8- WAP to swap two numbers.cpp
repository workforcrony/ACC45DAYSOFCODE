/* WAP to swap two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25 
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	
	cout<<"Input two numbers: "<<endl;
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;	
	cout<<"Swapping of two num is "<<a<< ":" <<b<<endl;
	return 0;
}

