#include<bits/stdc++.h>
using namespace std;
int k,m,n;
string dic[105];
vector<string> fnal;
bool check (string kq){
    for (int i=0;i<k;i++){
        if (kq==dic[i]) return 1;
    }
    return 0;
}
void find(char a[10][10],int i, int j, string str, bool visited[10][10]){
    visited[i][j]=true;
    str=str+a[i][j];
  //  cout <<str<<endl;
    if (check (str) ==1) fnal.push_back(str);
    for (int row = i-1;row<=i+1 && row<m;row++){
        for (int col = j-1;col<=j+1 && col<n;col++){
            if(row>=0 && col>=0 && visited[row][col]==false){
                find(a,row,col,str,visited);
            }
        }
    }
    str.erase(str.length()-1);
    visited[i][j]=false;
}
int main (){

    int t;
    cin >>t;
    while(t--){
        bool visited[10][10]={{false}};
        string ans ="";
        fnal.clear();
        cin >>k>>m>>n;
        for (int i = 0;i<k;i++){
            cin >> dic[i];
        }
        char a[10][10];
        for (int i =0;i<m;i++){
            for (int j = 0;j<n;j++){
                cin >>a[i][j];
            }
        }
        for (int i = 0;i<m;i++){
            for (int j =0;j<n;j++){
                find(a,i,j,ans,visited);
            }
        }
        if (fnal.size()==0) cout <<"-1";
        else {
            for (int i = 0;i<fnal.size();i++){
                cout <<fnal[i]<<" ";
            }
        }
        cout <<endl;

    }


    return 0;
}