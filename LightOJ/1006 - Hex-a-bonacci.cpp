#include <iostream>
#include <cstdio>
using namespace std;

#define N 10000
#define mod 10000007

int a, b, c, d, e, f;


long long dp[N + 1];

void calculateSpecialFibo(int n = N)
{
    dp[0] =  a%mod;
    dp[1] =  b%mod;
    dp[2] =  c%mod;
    dp[3] =  d%mod;
    dp[4] =  e%mod;
    dp[5] =  f%mod;

    for(int i = 6; i<= n; i++)
    {
        dp[i] = (dp[i-1]%mod + dp[i-2]%mod + dp[i-3]%mod + dp[i-4]%mod + dp[i-5]%mod + dp[i-6]%mod )%mod;
    }

    /*for(int i = 0; i<= n; i++)
    {
        cout << i << " : " << dp[i] << endl;
    }*/
}

long long fn( int n )
{
    return dp[n];
}
int main()
{
    int n, caseno = 0, cases;
    cin >> cases;
    while( cases-- )
    {
        cin >> a >> b >> c >> d >> e >> f >> n;

        calculateSpecialFibo(n);
        cout << "Case " << ++caseno << ": " << fn(n) << endl;
    }
    return 0;
}
