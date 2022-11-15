// WAP to read marks of 5 students Calculate the SUM and AVERAGE
#include <iostream>
using namespace std;
int main() {
    int marks[5],i;
    int sum=0,avg;
    for(i=0;i<5;i++){
        cin>>marks[i];
        sum=sum+marks[i];    
    }
    avg=sum/5;
    cout<<"Sum: "<<sum<<"   "<<"Average: "<<avg;
    
    return 0;
}
