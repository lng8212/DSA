#include <bits/stdc++.h>
using namespace std;

int v, e;
vector<vector<int> > a;
vector<int> ans;
bool chuaxet[10005];
void init()
{
    a.clear();
    ans.clear();
    a.resize(1005);
    memset(chuaxet,0,sizeof(chuaxet));
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
}

int Find(int x){
    int s=0;
    for (int i= 1;i<=v;i++){
        for (int j = 0;j<a[i].size();j++){
            if (a[i][j]==x) s++;
        }
    }
    return s;
}
int sumz (){
    for (int i = 1;i<=v;i++){
        
        if (Find(i)!=a[i].size()) return 0;
    }
    return 1;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        // Euler(firstz());
        cout <<sumz()<<endl;

    }



    return 0;
}