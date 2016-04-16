#include <iostream>
#include <cstdio>
using namespace std;

typedef unsigned long long int longint;

int main (void)
{
    int T;
    longint m, n, kn;

    // freopen("in.txt", "r", stdin);

    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        cin >> m >> n;

        if(n>m)swap(m,n);

        if(n==1)kn=m;
        else if(n==2) kn = (m/4)*4 + min((int)(m%4),2)*2;
        else kn = (m*n +1)/2;

        cout << "Case " << i << ": " << kn << endl;
    }
    return 0;
}
