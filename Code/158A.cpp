#include <iostream>
#include <cstdio>
using namespace std;

int main (void)
{
    int counter = 0, k, n, temp, maximum;

    freopen("in.txt", "r", stdin);

    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        cin >> temp;

        if(temp > 0)
        {
            if(i <= k)
            {
                counter++;
                maximum = temp;
            }
            else
            {
                if(temp >= maximum)
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    cout << counter;

    return 0;
}
