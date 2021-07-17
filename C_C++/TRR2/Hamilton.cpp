#include<bits/stdc++.h>
using namespace std;

int n, a[100][100], u;
bool unused[100];
int x[100];
void init(){
    cin >>n;
    cin >>u;
    for (int i =0;i<100;i++){
        unused[i] = true;
    }
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cin >>a[i][j];
        }
    }
    x[1]=u;
    unused[u]=false;
}
void Hamilton(int q ){
    for (int i = 1;i<=n;i++){
        if (q==n+1 && i==u && a[x[q-1]][i]==1){
            for (int j=1;j<=n;j++){
                cout <<x[j]<<" ";
            }
            cout <<u<<endl;
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
    
    init();
    Hamilton(2);
    
    
    return 0;
}