#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream kuch_bhi_naam("Sample_close_1.txt");
    string a;
    cout<<"Enter the name -";
    cin>>a;
    kuch_bhi_naam<<a;
    kuch_bhi_naam.close();
    
    ifstream in("Sample_close_1.txt");
    string b;
    in>>b;
    cout<<b<<endl;
    in.close();
return 0;
}