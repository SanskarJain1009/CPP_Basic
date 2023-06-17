#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Your Rating for this- \n (Rate from 1 to 5.)\n";
    cin>>a;
    switch(a)
    {
        case 1: printf("You Rated this 1.\n");
                break;
        case 2: printf("You Rated this 2.\n");
                break;
        case 3: printf("You Rated this 3.\n");
                break;
        case 4: printf("You Rated this 4.\n");
                break;
        case 5: printf("You Rated this 5.\n");
                break;
        default : printf("Your input is wrong.\n");
                  break;
    }
}