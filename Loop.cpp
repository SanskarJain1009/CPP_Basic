#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int i=0, k=0;

    cout<<"Below is the while loop.\n";
    cout<<"Enter the number whose tabel you want- "<<endl;
    cin>>a;
    while(i<10)
    {
        cout<<a<<"*"<<i+1<<"="<<(a*(i+1))<<endl;
        i++;
    }

    cout<<"Below is the for loop.\n";
    cout<<"Enter the number whose table you want="<<endl;
    cin>>b;
    for(int j=0;j<10;j++)
    {
        cout<<b<<"*"<<j+1<<"="<<(b*(j+1))<<endl;
    }

    cout<<"Below is the while-do loop.\n";
    cout<<"Enter the number whose table you want="<<endl;
    cin>>c;
    do
    {
        cout<<c<<"*"<<k+1<<"="<<(c*(k+1))<<endl;
        k++;
    }
    while(k<10);
    return 0;
}