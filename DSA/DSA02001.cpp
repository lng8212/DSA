#include <bits/stdc++.h>
using namespace std;

int n;
int a[15];

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        cout << "[";
        for (int i = 1; i <= n; i++)
        {
            if (i < n)
                cout << a[i] << ' ';
            else
                cout << a[i];
        }
        cout << "]";
        cout << endl;
        int z = n;
        while (z > 1)
        {
            for (int i = 1; i < z; i++)
            {
                a[i] = a[i] + a[i + 1];
            }
            cout << "[";
            for (int i = 1; i < z; i++)
            {
                if (i < z - 1)
                    cout << a[i] << ' ';
                else
                    cout << a[i];
            }
            cout << "]";
            cout << endl;
            z--;
        }
    }

    return 0;
}