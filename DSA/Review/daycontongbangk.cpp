#include<bits/stdc++.h>
#include<string>
using namespace std;

int n,k;
int a[20];
bool unused[20];
bool check = false;
void init (){
    check = false;
    for (int i = 0;i<20;i++){
        unused[i]=true;
    }
    cin >>n>>k;
    for (int i = 1;i<=n;i++){
        cin >>a[i];
    }
    sort(a+1,a+n+1);
}

void solve(int i,int s, string kq){
    if (s==k) {
        check = true;
        cout <<"[";
        for (int i = 0;i<kq.size()-1;i++){
            cout <<kq[i];
        }
        cout <<"] ";

    }
    for (int j = i;j<=n;j++){
        if (s+a[j]<=k && unused[j]==true){
            unused[j]=false;

            solve(j,s+a[j], kq+ to_string(a[j])+" ");
            unused[j]=true;
        } 
    }
}

int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        solve(1,0,"");
        if (check == false) cout <<"-1";
        cout <<endl;
    }



    return 0;
}