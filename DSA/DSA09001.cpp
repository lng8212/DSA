#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int v,e;
        cin >>v>>e;
        vector< vector<int> > a(100000);

        for (int i = 0;i<e;i++){
            int x,y;
            cin >>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i =1;i<=v;i++){
            cout <<i<<": ";
            for (int j=0;j<a[i].size();j++){
                cout <<a[i][j]<<" ";
            }
            cout <<endl;
        }

    }



    return 0;
}