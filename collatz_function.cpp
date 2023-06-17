#include<iostream>
using namespace std;
int collatz(int *a);
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<collatz(&a)<<endl;
return 0;
}
int collatz(int *a)
    {
        int b=0;
        if(*a==1){b+=1;return b;}
        else{
        while(*a!=1)
        {
            if(*a%2==0)
                {
                    *a=*a/2;
                }
            else
                {
                    *a=(3*(*a))+1;
                }  
            b++;    
        }
        }
    return b;
}