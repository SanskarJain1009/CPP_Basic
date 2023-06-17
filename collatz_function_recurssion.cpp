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
        int b=1;
        if(*a==1){return 0;}
        if(*a<1){return 0;}
        if(*a>1){
            
            if(*a%2==0)
                {
                    *a=*a/2;
                    b++;
                }
            else
                {
                    *a=(3*(*a))+1;
                    b++;
                }  
                
                cout<<*a<<endl;
                return collatz(a);
            }
            return b;
    }