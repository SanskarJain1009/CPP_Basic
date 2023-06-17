#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out("sample_write.txt");     //Write Operation.
    string a="Harry Bhai";
    string b;
    out<<a;

    ifstream in("sample_read.txt");        //Read Operation.
    in>>b;
    cout<<b<<endl;
    cout<<b;
    getline(in, b);
    cout<<b<<endl;

return 0;
}