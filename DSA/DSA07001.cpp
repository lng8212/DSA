#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    stack<int> ans;
    while (cin >> a)
    {
        int n;
        if (a == "push")
        {

            cin >> n;
            ans.push(n);
        }
        if (a == "show")
        {
            vector<int> zz;
            if (ans.size() == 0)
                cout << "empty" << endl;
            else
            {
                while (ans.size() > 0)
                {
                    zz.push_back(ans.top());
                    ans.pop();
                }
                for (int i = zz.size() - 1; i >= 0; i--)
                {
                    cout << zz[i] << " ";
                }
                cout <<endl;
                for (int i = zz.size() - 1; i >= 0; i--)
                {
                    ans.push(zz[i]);
                }
            }
        }
        if (a=="pop"){
            if (ans.size()>0) ans.pop();
        }
    }

    return 0;
}