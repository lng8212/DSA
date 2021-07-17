#include<bits/stdc++.h>
using namespace std;
int a[500][500];
bool vs[500][500];
char back[500][500];
struct  pos{
    int x,y;
};
pos add (int u, int v){
    pos k;
    k.x=u;
    k.y=v;
    return k;
}
int n;
string res="";
void process(){
    int x=n,y=n;
    while (x!=1 || y!=1){
        if (back[x][y]=='D'){
            x=x-1;
            res=res+'D';
        }
        else if (back[x][y]=='R'){
            y=y-1;
            res=res+'R';
        }
    }
    reverse(res.begin(),res.end());
	cout<<res<<'\n';
}
void BFS(int u, int v){
    pos c;
    c.x=u;
    c.y=v; 
    vs[u][v]=true; 
    queue <pos> list;
    list.push(c);
    while (!list.empty()){
        pos z=list.front(); list.pop();
        if (z.x==n && z.y==n) {
            process();
            return;
        }
        if (vs[z.y+1][z.x]==false && a[z.y+1][z.x]==1 ){
            list.push(add(z.x,z.y+1));
            back[z.y+1][z.x]='D';
            vs[z.y+1][z.x]=true;
       }
       if (vs[z.y][z.x+1]==false && a[z.y][z.x+1]==1){
            list.push(add(z.x+1,z.y));
            back[z.y][z.x+1]='R';
            vs[z.y][z.x+1]=true;
        }
    }
    cout <<-1;
}
int main(){

    cin >>n;
 
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >>a[i][j];
        }
    }
    BFS(1,1);
    return 0;
}