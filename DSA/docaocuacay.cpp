#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int dd[100005] = {0};
        for (int i = 0; i < n-1; i++)
        {
            int u, v;
            cin >> u >> v;
            dd[v] = dd[u] + 1;
            ans = max(ans, dd[v]);
        }
        cout << ans << endl;
    }

    return 0;
}