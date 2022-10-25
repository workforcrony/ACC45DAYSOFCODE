/*WAP in C++ to check whether the primitive values crossing the limits or not.
Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987 */

#include<iostream>
using namespace std;
int main()
{
	int gender;
	bool married;
	int kid;
	cout<<"Enter gender: "<<endl;
	cin>>gender;
	if(gender==1){
		cout<<"Is she married?"<<endl;
		cin>>married;
		if(married==1){
			cout<<"How many kids she has?"<<endl;
			cin>>kid;
			if(kid==2){
				cout<<"Year of her appointment : 2009"<<endl;
				cout<<"Salary for a year : 1500000"<<endl;
				cout<<"Height is : 79.48"<<endl;
				cout<<"GPA is 4.69"<<endl;
				cout<<"Salary drawn upto : 12047235"<<endl;
				cout<<"Balance till : 995324987"<<endl;	
			}
			else{
				cout<<"This employe is not in company!!!"<<endl;
			}	
		}
		else{
			cout<<"This employe is not in company!!!"<<endl;
		}
	}
	
	
	
	return 0;
}

