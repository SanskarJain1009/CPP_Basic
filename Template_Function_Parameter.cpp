#include<iostream>
using namespace std;

template<class T1, class T2>
float average(T1 m, T2 n)
{   
    float avg=(m+n)/2;
    return avg;
}

int main(){
    float a, b;
    cout<<"Enter number for average - ";
    cin>>a;
    cout<<"Enter the other number - ";
    cin>>b;
    float d=average(a,b);
    cout<<"The average of the given numbers is : "<<d<<endl;
    float c=average(2.4, 4.2);
    cout<<endl<<c;
return 0;
}