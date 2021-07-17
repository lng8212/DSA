#include <bits/stdc++.h>
const int maxn = 1e5;
 
using namespace std;
 
int dp[maxn + 10];
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 1; i <= n; ++i)
        {
            dp[i] = n - i;
        }
        for(int i = n; i >= 1; --i)
        {
            if(i * 2 <= n)
            {
                dp[i] = min(dp[i], dp[i * 2] + 1);
            }
            if(i * 3 <= n)
            {
                dp[i] = min(dp[i], dp[i * 3] + 1);
            }
            if(i + 1 <= n)
            {
                dp[i] = min(dp[i], dp[i + 1] + 1);
            }
        }
        cout << dp[1] << '\n';
    }
}