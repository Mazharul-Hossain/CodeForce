#include <iostream>
#include <cstdio>
using namespace std;

int main (void)
{
    int n; 
	long temp1, temp2;

    // freopen("in.txt", "r", stdin);

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> temp1 >> temp2;

        cout << "Case " << i << ": " << temp1 + temp2 << endl;
    }
    return 0;
}
