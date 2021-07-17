#include<bits/stdc++.h>
using namespace std;
queue <long long > q;
vector<long long > a[1000009];
bool ok[1000009];
long long back[1000009];
void BFS(long long n){
    q.push(n);
    ok[n]=true;
    while (q.size()){
    long long z=q.front();
    q.pop();
        for (int i=0;i<a[z].size();i++){
            long long k=a[z][i];
            if (ok[k]==false){
                back[k]=z;
                ok[k]=true;
                q.push(k);
             }
        }
    }
}
vector<long long > ans;
void min(long long st, long long end){
    if (st==end) ans.push_back(end);
    else if( back[end]==-1) {
        cout <<-1;
    }
    else {
    min(st,back[end]); 
    ans.push_back(end);
}
}
int main(){
    long long V,E;
    cin >>V>>E;
    long long st,end;
    cin>>st>>end;
    for (int i=1;i<=E;i++){
        long long u,v;
        cin >>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for (int i=1;i<1000009;i++){
        back[i]=-1;
    }
    BFS(st);
    min(st,end);
    cout <<ans.size()<<endl;
    for (int i=0;i<ans.size();i++){
        cout <<ans[i]<<' ';
    }
    return 0;
}