#include<bits/stdc++.h>
using namespace std;
vector<int> a;
void next_bin(){
    int j = a.size()-1;
    while (j>=0&&a[j]==1) j--;
    if (j<0) {
        a.push_back(0);
        a[0]=1;
        for (int i = 1;i<a.size();i++){
            a[i]=0;
        }
    }
    else{
        a[j]=1;
        for (int k = j+1;k<a.size();k++){
            a[k]=0;
        }
    }
}

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int count = 0;
        a.clear();
        a.push_back(0);
        while (count <n){
            next_bin();
            count ++;
            for (int i = 0;i<a.size();i++){
                cout <<a[i];
            }
            cout <<" ";
        }
        cout <<endl;
        
    }
}