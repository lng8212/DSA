#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >>n;
    vector<string> a;
    for (int i=0;i<n;i++){
        string c;
        cin >>c;
        a.push_back(c);
    }
    sort (a.begin(),a.end());
    string check = a[a.size()-1];
    int sum=0;
    for (int i=a.size()-2;i>=0;i--){
        int S=0;
        while (a[i]!=check && S<=55){
            string tmp=a[i];
            char c=tmp[0];
            for (int j=0;j<tmp.size()-1;j++){
                tmp[j]=tmp[j+1];
            }
            tmp[tmp.size()-1]=c;
            a[i]=tmp;
            sum++;
            S++;
        }
        if (S>54) {
            cout <<"-1";
            return 0;
        }
    }
    cout <<sum;
    return 0;
}