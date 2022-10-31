/* Print integers from 1 to N using do while loop.
Input: integer range variable N.
Output: integer form 1 2 3…..N.
*/
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int N;
	cout<<"Input: integer range variable N "<<endl;
	cin>>N;
	do{
		cout<<"integers form "<<i<<endl;
		i++;
	}
	while(i<=N);
	return 0;
}

