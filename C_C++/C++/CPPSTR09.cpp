#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            int temp = 0;
            while (a[i] >= '0' && a[i] <= '9' && i < a.size())
            {
                temp = temp * 10 + (a[i] - '0');
                i++;
            }
            ans = max(ans, temp);
        }
        cout << ans << endl;
    }

    return 0;
}