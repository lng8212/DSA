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
        int b[11] = {0};
        for (int i = 0; i < a.size(); i++)
        {
            b[a[i] - '0']++;
        }
        int maxle = 0;
        int mark;
        bool check = 0;
        for (int i = 0; i <= 9; i++)
        {
            if (b[i] % 2 == 0 && b[i] != 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            for (int i = 0; i <= 9; i++)
            {
                if (b[i] > 0 && b[i] >= maxle && i != 0)
                {
                    maxle = b[i];
                    mark = i;
                }
            }
            while (b[mark] > 0)
            {
                cout << mark;
                b[mark]--;
            }
        }
        else
        {
            int demchan = 0;
            for (int i = 0; i <= 9; i++)
            {
                if (b[i] % 2 != 0 && b[i] >= maxle)
                {
                    maxle = b[i];
                    mark = i;
                }
                if (b[i] % 2 == 0 && b[i] > 0)
                    demchan++;
            }
            if (demchan == 1 && b[0] > 0 && b[0] % 2 == 0)
            {
                while (b[mark] > 0)
                {
                    cout << mark;
                    b[mark]--;
                }
            }
            else
            {
                for (int i = 0; i <= 9; i++)
                {
                    if (b[i] % 2 != 0)
                    {
                        if (i != mark)
                            b[i] = 0;
                    }
                }
                vector<int> save;
                for (int i = 9; i >= 0; i--)
                {
                    if (b[i] % 2 == 0 && b[i] > 0)
                    {
                        for (int j = 0; j < b[i] / 2; j++)
                        {
                            cout << i;
                            save.push_back(i);
                        }
                    }
                }
                while (b[mark] > 0)
                {
                    cout << mark;
                    b[mark]--;
                }
                for (int i = save.size() - 1; i >= 0; i--)
                {
                    cout << save[i];
                }
            }
        }

        cout << endl;
    }
    return 0;
}