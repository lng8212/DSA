#include<bits/stdc++.h>
using namespace std;

int n, a[105][105], u;
bool unused[105];
int x[105];
int check;
void init(){
    cin >>n;
    cin >>u;
    check = 0;
    memset(a,0,sizeof(a));
    for (int i =0;i<105;i++){
        unused[i] = true;
    }
    for (int i= 0 ;i<u;i++){
        int x,y;
        cin >>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    x[1]=1;
    unused[1]=false;
}

void Hamilton(int q ){
    for (int i = 1;i<=n;i++){
        if (q==n+1 && i==1 && a[x[q-1]][i]==1){
           check = 1;
        }
        else if (a[x[q-1]][i]==1 && unused[i]==true){
            unused[i]=false;
            x[q]=i;
            Hamilton(q+1);
            unused[i]=true;
        }
    }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        init();
        Hamilton(2);
        if (check == 1) cout <<1;
        else cout <<0;
        cout <<endl;
    }
    
    
    
    return 0;
}