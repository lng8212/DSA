#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){ 
        int n1,n2,n3;
        cin >>n1>>n2>>n3;
        long long a[n1+1],b[n2+1],c[n3+1];
        for (int i = 0;i<n1;i++){
            cin >>a[i];
        }
        for (int i = 0;i<n2;i++){
            cin >>b[i];
        }
        for (int i = 0;i<n3;i++){
            cin >>c[i];
        }
        
        int i = 0,j=0,k=0;
        bool check = 0;
        while (i<n1 && j<n2 && k<n3){
            if (a[i]==b[j] && a[i]==c[k]) {
                cout <<a[i]<<" ";
                check = 1;
                i++;
                j++;
                k++;
            }
            else if (a[i]<b[j]) i++;
            else if (b[j]<c[k]) j++;
            else k++;
        }
        if (check == 0) cout <<"-1";
        cout <<endl;
    }

    return 0;
}