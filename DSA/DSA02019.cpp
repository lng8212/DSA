#include<bits/stdc++.h>
using namespace std;

bool unused[100][100];
int a[100][100];
int n,m;
int maxs;
vector<int> ans;
void init (){
    cin >>n>>m;
    maxs=0;
    ans.clear();
   
    for (int i = 0;i<100;i++){
        for (int j = 0;j<100;j++){
            a[i][j]=0;
        }
    }
    while (m--){
        int x,y;
        cin >>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
}

void Try(int x){
    for (int y = 0;y<n;y++){
        if (a[x][y]==1){
            a[x][y]=0;
            a[y][x]=0;
            ans.push_back(1);
            if (ans.size()>maxs) maxs = ans.size();
            Try(y);
            a[x][y]=1;
            a[y][x]=1;
            ans.pop_back();
        }
    }
}

int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        for (int i = 0;i<n;i++){
            Try(i);
        }
        cout <<maxs<<endl;
    }


    return 0;
}