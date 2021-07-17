#include<bits/stdc++.h>
using namespace std;


int n;
vector<int> x;
void init (){
    x.clear();
    cin >>n;
    x.push_back(n);
}

void Try(int i, int s){
    if (s==n){
        for (int z=1;z<x.size();z++){
            cout <<x[z];
        }
        cout <<endl;
    }
    for (int j = n-s;j>=1;j--){
        x.push_back(j);
        Try(i+1,s+j);
        x.pop_back();
    }
}


int main (){


    int t;
    cin >>t;
    while (t--){
        init();
        Try(1,0);
    }


    return 0;
}