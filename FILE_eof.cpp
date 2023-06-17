#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    string st;
    
    ofstream out("Sample_file_eof.txt");
    out<<"Sambhav Chutiya hai."<<endl;
    out<<"Sorry bahut bada chutiya hai"<<endl;
    out.close();


    ifstream in("Sample_file_eof.txt");
    while(in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
}
