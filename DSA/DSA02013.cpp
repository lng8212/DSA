#include<bits/stdc++.h>
using namespace std;

int n,p,s;
vector<int> primez;
bool isPrime(int n){
    if (n<2) return false;
    for (int i =2 ;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int a[20];
void pusht (){
    for (int i = p+1;i<=s;i++){
        if (isPrime(i)==true) primez.push_back(i);
    }
}
vector< vector<int> > ans;
void reset(){
    ans.clear();
    primez.clear();
    a[0]=-1;
}
void Try(int i, int sum){
    for (int j = a[i-1]+1;j<primez.size();j++){
        if (sum+primez[j]<=s){
            a[i]=j;
            if (i==n){
                if(sum+primez[j]==s) {
                    vector<int>tmp;
                    for (int z = 1;z<=n;z++){
                        tmp.push_back(primez[a[z]]);
                    }
                    ans.push_back(tmp);
                }
            }
            else Try(i+1,sum+primez[j]);

        }
    }
}
int main (){


    int t;
    cin >>t;
    while (t--){
        reset();
        cin >>n>>p>>s;
        pusht();
        Try(1,0);
        cout <<ans.size()<<endl;
        for (int i = 0;i<ans.size();i++){
            for (int j =0 ;j<ans[i].size();j++){
                cout <<ans[i][j]<<" ";
            }
            cout <<endl;
        }
    }


    return 0;
}