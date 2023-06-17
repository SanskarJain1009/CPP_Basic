#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m ;
    cin>>n;
    int gcd=0;
    int temp=true;
    while(temp==true)
    {
        if(m>n){
            m=m%n;
            if(m==0){ gcd=n; break;}
        }
        else{n=n%m; if(n==0) { gcd=m; break;}}

    }
    cout<<gcd<<endl;
    return 0;
}