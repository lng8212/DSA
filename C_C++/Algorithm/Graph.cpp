#include<bits/stdc++.h>
using namespace std;
//   void truyvet(int a[],int n){
//       cout <<endl;
//         while (a[n]>0){
//             cout<<a[n];
//             n=a[a[n]];
//         }
//     }
int canh,dinh;
 vector<int>ke [10000+5];
bool OK[10006];
void OK1(){
    for (int i=0;i<10006;i++){
        OK[i]=true;
    }
}
void DFS(int u){
    int v;
    cout <<"Dinh ke cua "<<u<<" : ";
    OK[u]=false;
    for (int i=0;i<ke[u].size();i++){
        v=ke[u][i];
        if(OK[v]==true){
             cout <<v<<' ';
            DFS(v);
           
        }
    }
}

int main(){
  //  int a[100][100];
    OK1();
    
    cin >>dinh>>canh;
   
    for (int i=1;i<=canh;i++){
        {
           int u,v;
           cin >>u>>v;
           ke[u].push_back(v);
           ke[v].push_back(u);
        }
    }
    
    // queue<int> q;
    // bool ok[100];
    // for (int i=0;i<100;i++){
    //     ok[i]==false;
    // }
    // q.push(2);
    // int truoc[100]={0};
    // while(q.size()){
    //     int top=q.front();
    //     cout <<top;
    //     if (top==6) {
    //         break;
    //     }

    //     q.pop();
    //     for (int i=0;i <ke[top].size() ;i++){
    //         if(ok[ke[top][i]]==false){
    //             q.push(ke[top][i]);
    //             truoc[ke[top][i]]=top;
    //         }
    //     }
    //        ok[top]=true;
    //     }
    //     truyvet(truoc,6);
    return 0;
}