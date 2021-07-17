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
        bool check = 0;
        int i = a.size() - 1;
        while (i >= 0 && a[i] == '1')
            i--;
        if (i < 0)
            check = 1;
        if (check == 0)
        {
            a[i] = '1';
            for (int j = i + 1; j < a.size(); j++)
            {
                a[j] = '0';
            }
        }
        if (i < 0)
        {
            for (int i = 0; i < a.size(); i++)
            {
                cout << '0';
            }
        }
        else
        {
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i];
            }
        }
        cout << endl;
    }

    return 0;
}