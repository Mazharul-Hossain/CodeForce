#include <iostream>
#include <cstdio>
using namespace std;

int main (void)
{
    int n;
    long temp1;

    // freopen("in.txt", "r", stdin);

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> temp1;

        if(temp1<=10)
            cout << temp1 << " " << "0" << endl;
        else
            cout << "10" << " " << temp1 - 10 << endl;
    }
    return 0;
}
