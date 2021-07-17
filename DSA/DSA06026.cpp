#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 1;
    bool haveswap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                haveswap = true;
            }
        }

        if (haveswap == false)
            break;
        else
        {
            cout << "Buoc " << dem++ << ": ";
            for (int j = 0; j < n; j++)
            {
                cout << a[j] << " ";
            }
            cout << endl;
        }
        haveswap = false;
    }

    return 0;
}