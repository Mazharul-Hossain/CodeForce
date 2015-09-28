#include <iostream>
using namespace std;

int main (void)
{
    unsigned long long w;
    cin>> w;

    if(w>3)
    {
        if(w%2)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
