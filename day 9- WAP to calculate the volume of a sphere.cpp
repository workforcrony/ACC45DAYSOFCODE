/* WAP to calculate the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
*/
#include<iostream>
using namespace std;
int main()
{
	float v,r;
	float pi=3.14;
	cout<<"Calculate the volume of a sphere :"<<endl;
	cin>>r;
	v=(4*pi*r*r*r)/3;
//	v=((4/3)*pi*r*r*r);
	cout<<"The volume of a sphere is :"<<v<<endl;
	return 0;
}

