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
        int del = 0;
        stack<char> ss;
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (ss.size()==0) ss.push(a[i]);
            else if (a[i]==']' && ss.top()=='['){
                del+=2;
                ss.pop();
            }
            else if (a[i]=='[' && ss.top()==']'){
                ans += ss.size()+del;
                ss.pop();
            }
            //[]
            // ]][][][[
                //][][][][
                // 4 +
            else if (a[i]=='['){
                ss.push(a[i]);
            }
            else if (a[i]==']' && ss.top()==']'){
                ss.push(a[i]);
            }
            if (ss.size()==0) del = 0;
        }
        cout << ans << endl;
    }
    // ]][][][[]][

    return 0;
}