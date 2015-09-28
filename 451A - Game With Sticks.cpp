#include <iostream>
using namespace std;

int main (void)
{
    int a,b;
    cin>> a>>b;

    int temp;
    temp = (a>b)?b:a;

    if(temp%2)
    {
        cout<<"Akshat";
    }
    else
    {
        cout<<"Malvika";
    }
    return 0;
}
