#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.second.second != b.second.second)
        return (a.second.second > b.second.second);
    return (a.second.first < b.second.first);
}
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<int, pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            if (ans.find(a[i]) != ans.end())
                ans[a[i]].second++;
            else
                ans[a[i]] = make_pair(i, 1);
        }
        auto it = ans.begin();
        vector<pair<int, pair<int, int>>> b;
        for (it; it != ans.end(); ++it)
            b.push_back(make_pair(it->first, it->second));
        sort(b.begin(), b.end(), cmp);
        bool check = 0;
        for (int i = 0; i < b.size(); i++)
        {
            int count = b[i].second.second;
            if (count >1) {
                check = 1;
                cout <<b[i].first;
                break;
            }
        }
        if (check == 0) cout <<"NO";
        cout <<endl;
    }
 
    return 0;
}