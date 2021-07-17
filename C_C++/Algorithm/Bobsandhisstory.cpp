#include<bits/stdc++.h>
using namespace std;
int canh,dinh;
 vector<int>ke [10000+5];
bool OK[10006];
void OK1(){
    for (int i=0;i<10006;i++){
        OK[i]=true;
    }
}
void DFS(int u){
    int v;
    OK[u]=false;
    for (int i=0;i<ke[u].size();i++){
        v=ke[u][i];
        if(OK[v]==true){
             cout <<v<<' ';
            DFS(v);
           
        }
    }
}
int main(){    
 cin >>dinh>>canh;
	for (int i=1;i<=canh;i++){
        {
           int u,v;
           cin >>u>>v;
           ke[u].push_back(v);
           ke[v].push_back(u);
        }
    }
    for (int i=1;i<=dinh;i++){
    	for (int j=0;j<ke[i].size();j++){
    		OK1();
            
            int m=ke[i][j];
             cout <<"Dinh ke cua "<<m<<" : ";
    		DFS(m);
    		cout <<endl;
		}
	}
   
    return 0;
}