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
        a[y].push_back(x);
    }
}
void Euler (int u){
    stack<int> kq;
    kq.push(u);
    while(kq.size()>0){
        int k = kq.top();
        bool kt = 0;
        for (int i = 0;i<a[k].size();i++){
            if (a[k][i]>0){
                kq.push(a[k][i]);
                int m = a[k][i];
                for (int j = 0;j<a[m].size();j++){
                    if (a[m][j]==k) {
                        a[m][j]*=-1;
                    }
                }
                kt =1;
                a[k][i]*=-1;
                break;
            }
        }
        if (kt ==0){
            int xx = kq.top();
            kq.pop();
            ans.push_back(xx);
        }
    }
}
int firstz(){
    for (int i = 1;i<=v;i++){
        if (a[i].size()%2!=0){
            return a[i].size();
        }
    }
    return 1;
}
int sumz (){
    int le = 0;
    int chan =0;
    for (int i =  1;i<=v;i++){
        if (a[i].size()%2==0) chan++;
        else le++;
    }
    if (le==2) return 1;
    if (le==0) return 2;
    return 0;
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