#include<bits/stdc++.h>
using namespace std;
int a[100][100];
bool unused[100];
int n;
int kq=0;
void BFS(int k){
    queue<int> ans;
    ans.push(k);
    while (ans.size()>0){
        int k = ans.front();
        unused[k]=1;
        ans.pop();
        for (int i = 1;i<=n;i++){
            if (a[k][i]==1 && unused[i]==0){
                ans.push(i);
            }
        }
    }
}
void TPLT (){
    for (int i =1;i<=n;i++){
        if (unused[i]==0){
            kq++;
            BFS(i);
        }
    }
}
int main (){
    
    cin >>n;
    memset(unused,0,sizeof(unused));
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cin >>a[i][j];
        }
    }
    TPLT();
    cout <<kq;
    
    
    return 0;
}