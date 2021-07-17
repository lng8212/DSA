#include<bits/stdc++.h>
using namespace std;
string frompretomid(string s)
{
    stack <string> st;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string tmp ="";
            tmp = s2+s[i]+s1;
            st.push(tmp);
        }
        else
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
    }
    return st.top();
}
void solve()
{
    string s;
    cin >> s;
    cout <<frompretomid(s) << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}