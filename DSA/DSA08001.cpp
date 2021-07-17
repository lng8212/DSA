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
        queue<int> ans;
        while (n--)
        {  
            int k;
            cin >> k;
            if (k == 1)
            {
                cout << ans.size() << endl;
            }
            if (k == 2)
            {
                if (ans.size() == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            if (k == 3)
            {
                int z;
                cin >> z;
                ans.push(z);
            }
            if (k == 4)
            {
                if (ans.size() > 0)
                    ans.pop();
            }
            if (k == 5)
            {
                if (ans.size() > 0)
                    cout << ans.front() << endl;
                else
                    cout << "-1" << endl;
            }
            if (k == 6)
            {
                if (ans.size() == 0)
                    cout << "-1" << endl;
                else
                {
                    cout <<ans.back()<<endl;
                    // vector<int> c;
                    // while (ans.size() > 0)
                    // {
                    //     c.push_back(ans.back());
                    //     ans.pop();
                    // }
                    // cout << c[c.size() - 1] << endl;
                    // for (int i = c.size() - 1; i >= 0; i--)
                    // {
                    //     ans.push(c[i]);
                    // }
                }
            }
        }
    }

    return 0;
}