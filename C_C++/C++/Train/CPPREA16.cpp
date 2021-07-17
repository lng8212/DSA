#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int k= a.size()-1;
        int mem = -1;
        for (int i = k-1 ; i>0;i--){
            if (a[i]>a[i+1]) {
                mem = i;
                break;
            }
        }
        if (mem==-1) {
            cout <<mem<<endl;
            continue;
        }
        int pos = -1;
        for (int i = a.size()-1;i>mem;i--){
           if (pos == -1){
               if (a[i]<a[mem]) pos = i;
           }
           else if (a[i]>=a[pos]) pos = i;
        }
        swap (a[pos], a[mem]);
        cout <<a<<endl;
    }



    return 0;
}