#include<bits/stdc++.h>
using namespace std;

int a[20];
int n;
bool check (int n){
    for (int i = 2;i<=n;i++){
        if (a[i]>a[i-1]) return 0;
    }
    return 1;
}

vector<vector<int> > kq;
void Try(int i, int s){
    if (s>n || i>n) return;
    for (int j = n-s;j>=1;j--){
        a[i]=j;

        if(s+j==n && check(i+1)==1){
            vector<int>addx;

            for (int z = 1;z<=i;z++){
                addx.push_back(a[z]);
            }
            kq.push_back(addx);
        }
        else Try(i+1,s+j);
    }
}

int main (){

    int t;
    cin >>t;
    while (t--){

        kq.clear();
        cin >>n;
        memset(a,0,sizeof(a));
        a[0]=20;
        Try(1,0);
        cout <<kq.size()<<endl;
        for (int i = 0;i<kq.size();i++){
            cout <<"(";
            for (int j = 0;j<kq[i].size()-1;j++){
                cout <<kq[i][j]<<" ";
            }
            cout <<kq[i][kq[i].size()-1]<<") ";
        }
        cout <<endl;
    }


    return 0;
}