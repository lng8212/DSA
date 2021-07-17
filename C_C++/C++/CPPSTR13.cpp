#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        int k;
        cin >> a >> k;
        int ans = 0;
        int dd[27];
        for (int i = 0; i < a.size(); i++)
        {
            memset(dd, 0, sizeof(dd));
            int dem = 0;
            for (int j = i; j < a.size(); j++)
            {
                if (dd[a[j] - 'a'] == 0)
                    dem++;

                dd[a[j] - 'a']++;

                if (dem == k)
                    ans++;
            
            }
        }
        cout << ans<< endl;
    }
    return 0;
}