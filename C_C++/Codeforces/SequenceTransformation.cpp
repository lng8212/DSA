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
        vector<int> a;
        int b[200006] = {0};
        map <int,int>h;
        int z;
        cin >>z;
        a.push_back(z);
        int dem = 1;
        for (int i = 1; i < n; i++)
        {
            int k;
            cin >>k;
            if (k!=a[dem-1]) {
                a.push_back(k);
                dem++;
            }
        }
        int ans[200007];
        if (a.size() == 1)
            cout << 0;
        else
        {
            int l = a[0];
            int r = a[a.size() - 1];
            for (int i = 0; i < a.size(); i++)
            {
                h[a[i]]++;
            }
            for (int i = 0; i < 200004; i++)
            {
                if (h[i] != 0)
                {
                    if (i == l && i == r)
                    {
                        b[i]--;
                    }
                    else if (i == r | i == l)
                    {
                        b[i] = b[i];
                    }
                    else
                        b[i]++;
                }
            }
            int minz = 999999;
            for (int i = 0; i < 200004; i++)
            {
                if (b[i] != 0)
                {
                    if (b[i] < minz)
                        minz = b[i];
                }
            }
            cout << minz;
        }
        cout << endl;
    }

    return 0;
}