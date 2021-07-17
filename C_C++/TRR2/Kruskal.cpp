#include<bits/stdc++.h>
using namespace std;
int n;
int parent[101];
int a[105][105];
vector<int>ans;
int find(int i){
    while (parent[i]!=i){
        i = parent[i];
    }
    return i;
}
void union1(int i, int j){
    int a = find(i);
    int b = find(j);
    parent[a]=b;
}
void kruskal(){
    int mincost = 0;
    for (int i = 0;i<105;i++){
        parent[i]=i;
    }
    int edge_count = 0;
    while (edge_count <n-1){
        int minz = 999999;
        int x=-1;
        int y=-1;
        for (int q = 0;q<n;q++){
            for (int j = 0;j<n;j++){
                if (find(q)!=find(j) && (a[q][j]<minz) && a[q][j]>0){
                    minz = a[q][j];
                    x=q;
                    y=j;
                }
            }
        }
        edge_count++;
        union1(x,y);
        ans.push_back(x);
        ans.push_back(y);
        mincost+=minz;
    }
    cout <<"dH = "<<mincost<<endl;
}

int main (){


    cin >>n;
    for (int i = 0;i<n;i++){
        for (int j =0;j<n;j++){
            cin >>a[i][j];
        }
    }
    kruskal();
    for (int i =0;i<ans.size();i+=2){
        cout <<ans[i]+1<<" "<<ans[i+1]+1<<endl;
    }

    return 0;
}