#include <bits/stdc++.h>
using namespace std;
int s;
string tmp;
int n, k;
int a[20];
vector<string> ans;
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - k)
        {
            for (int q = 1; q <= n - k; q++)
            {
                if (q == 1 && a[q] == 0)
                {
                    string zz = tmp;
                    for (int e = 1; e <= n - k; e++)
                    {
                        if (a[e] == 0)
                            zz += "B";
                        else
                            zz += "A";
                    }
                    ans.push_back(zz);
                    s++;
                }
                if (q == n && a[q] == 0)
                {
                    string zz;
                    zz.clear();
                    for (int e = 1; e <= n - k; e++)
                    {
                        if (a[e] == 0)
                            zz += "B";
                        else
                            zz += "A";
                    }
                    zz += tmp;
                    s++;
                    ans.push_back(zz);
                }
                if (q > 1)
                {
                    if (a[q] == a[q - 1] && a[q] == 0)
                    {
                        string zz = "";
                        for (int e = 1; e < q; e++)
                        {
                            if (a[e] == 0)
                                zz += "B";
                            else
                                zz += "A";
                        }
                        zz += tmp;
                        for (int e = q; e <= n - k; e++)
                        {
                            if (a[e] == 0)
                                zz += "B";
                            else
                                zz += "A";
                        }
                        s++;
                        ans.push_back(zz);
                    }
                }
            }
        }
        else
            Try(i + 1);
    }
}

int main()
{
    tmp.clear();
    ans.clear();
    cin >> n >> k;
    s = 0;
    for (int i = 0; i < k; i++)
    {
        tmp.push_back('A');
    }
    Try(1);
    cout << s << endl;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        string t = ans[i];
        for (int j = 0; j < t.size(); j++)
        {
            cout << t[j];
        }
        cout << endl;
    }
    return 0;
}