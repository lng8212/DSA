#include<bits/stdc++.h>
using namespace std;



int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<string>ans;
        queue<string>st;
        st.push("1");
        for (int i = 0;i<n;i++){
            string a = st.front();
            ans.push_back(a);
            st.pop();
            string x = a+"0";
            string y = a+"1";
            st.push(x);
            st.push(y);
        }
        for (int i = 0;i<n;i++){
            cout <<ans[i]<<" ";
        }
        cout <<endl;
    }

    return 0;
}