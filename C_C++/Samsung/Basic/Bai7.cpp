#include <bits/stdc++.h>
using namespace std;
int n, stop = 0, a[15];
vector<string> ans;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        stop = 1;
    else
    {
        int k = n;
        while (a[i] > a[k])
            k--;
        swap(a[k], a[i]);
        int c = n, r = i + 1;
        while (r < c)
        {
            swap(a[c], a[r]);
            r++;
            c--;
        }
    }
}
void in()
{
    string z;
    for (int i = 1; i <= n; i++)
        z.push_back(a[i] + '0');
    ans.push_back(z);
}
void hoanvi()
{
    do
    {
        in();
        sinh();
    } while (!stop);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        stop = 0;
        khoitao();
        hoanvi();
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << ' ';
        }
        ans.clear();
        cout << endl;
    }
    return 0;
}