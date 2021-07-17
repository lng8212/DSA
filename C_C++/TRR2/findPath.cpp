#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,s,t;
bool unusedDFS[100];
bool unusedBFS[100];
int truyvetBFS[100];
int truyvetDFS[100];
void DFS(int s){
    unusedDFS[s]=1;
    for (int i = 1;i<=n;i++){
        if (a[s][i]==1 && unusedDFS[i]==0){
            truyvetDFS[i]=s;
            cout <<i<<" ";
            DFS(i);
        }
    }
}

void BFS(int s){
    queue<int> kq;
    kq.push(s);
    unusedBFS[s]=1;
    while (kq.size()>0){
        int k = kq.front();
        kq.pop();
        for (int i = 1;i<=n;i++){
            if (a[k][i]==1 && unusedBFS[i]==0){
                kq.push(i);
                unusedBFS[i]=1;
                truyvetBFS[i]=k;
            }
        }
    }
}

int main (){
    memset(truyvetDFS,0,sizeof(truyvetDFS));
    memset(truyvetBFS,0,sizeof(truyvetBFS));
    memset(unusedDFS,0,sizeof(unusedDFS));
    memset(unusedDFS,0,sizeof(unusedDFS));
    cin >>n>>s>>t;
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cin >>a[i][j];
        }
    }
    DFS(s);
    BFS(s);
    if (truyvetBFS[t]==0) cout <<"no path";
    cout <<endl; 
	for (int i= 0;i<=t;i++){
		cout <<truyvetDFS[i]<<" "; 
	} 
//    else {
//        cout <<"DFS path: ";
//        int i = t;
//        cout << t<<" ";
//        while (truyvetDFS[i]!=0){
//            cout <<truyvetDFS[i]<<" ";
//            i = truyvetDFS[i];
//        }
//        cout <<endl;
//        cout <<"BFS path: ";
//        int j = t;
//        cout <<t<<" ";
//        while (truyvetBFS[j]!=0){
//            cout <<truyvetBFS[j]<<" ";
//            j = truyvetBFS[j];
//        }
//    }
    
    
    
    return 0;
}
