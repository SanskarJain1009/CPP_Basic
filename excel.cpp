#include<iostream>
#include<math.h>
using namespace std;
#include <bits/stdc++.h> 

long long powerty(int a)
{   
    long long out=1;
    for(int i=0;i<a;i++)
    {
        out*=26;
    }
    return out;
}
long long constant(int a)
{   
    long long sum=0;
    if(a==1) {return sum;}
    else{
        for(double i=a-1;i>0;i--)
        {
            sum+=powerty(i);
        }
        return sum;
    }
}
long long titleToNumber(string str) {
    // Write your code here
    int len=str.length();
    long long Constant=constant(len);

    long long sum=0;
    for(int i=0;i<len;i++)
    {   
        if(i==0) {sum+=(str[len-1]-64);}

        else {sum+=(str[len-1-i]-65)*powerty(i);} 
    }
    return sum+=Constant;
}
int main()
{
    string str;
    cin>>str;
    int a;

    cout<<titleToNumber(str)<<endl;
    
    return 0;
}
