#include <bits/stdc++.h>
using namespace std;
string subtractz(string a, string b)
{
    string ans;
    ans.resize(a.size());
    while (b.size() < a.size())
        b = "0" + b;
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int a1 = a[i] - '0' - carry;
        carry = 0;
        int b1 = b[i] - '0';
        int m = a1 - b1;
        if (m < 0)
        {
            m += 10;
            carry++;
        }
        ans[i] = m + '0';
    }
    while (ans[0] == '0')
        ans.erase(ans.begin());
    return ans;
}
bool cmp(string a, string b)
{
    if (a.size() == b.size())
        return a >= b;
    return a.size() >= b.size();
}
bool isNull(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '0')
            return false;
    }
    return true;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string tmp;
        tmp = "";
        string az = "";
        for (int i = 0; i < a.size(); i++)
        {
            tmp.push_back(a[i]);
            char dem = '0';
            while (cmp(tmp, b) == 1)
            {
                dem++;
                string t = subtractz(tmp, b);
                tmp = t;
            }
            if (isNull(tmp) == true)
                tmp.clear();
            az += dem;
        }
        while (az[0] == '0')
            az.erase(az.begin());
        if (cmp(a,b)==false) cout <<"0"<<endl;
        else
        cout << az << endl;
    }

    return 0;
}