#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter any number"<<endl;
        cin>>a[i];
    }
    
    for(int j=0;j<5;j++)
    {
        cout<<"Entered Number "<<j+1<<" : "<<a[j]<<endl;
    }
    return 0;
}