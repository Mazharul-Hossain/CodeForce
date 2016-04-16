#include <iostream>
using namespace std;

int main (void)
{
    unsigned long long m,n,a;
    cin>> m>>n>>a;

    unsigned long long l = (int)(m/a);
    unsigned long long w = (int)(n/a);

    if(m%a)l++;
    if(n%a)w++;
    cout<<(l)*(w);

    return 0;
}
