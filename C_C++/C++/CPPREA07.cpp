#include<bits/stdc++.h>
using namespace std;
bool cmp (string a, string b){
    string x = a+b;
    string y = b+a;
    if (x>y) return 1;
    else return 0; 
}
int main (){
    int t;
    cin >>t;
    while (t--){
        vector<string> a;
        int n ;
        cin >>n;
        for (int i=0;i<n;i++){
            string b;
            cin >>b;
            a.push_back(b);
        }
        sort(a.begin(),a.end(),cmp);
        for (int i=0;i<a.size();i++){
            cout <<a[i];
        }
        cout <<endl;
    }

    return 0;
}