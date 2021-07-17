#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int k;
        string s;
        cin >>k;
        cin  >>s;
        for (int i = 0;i<s.size()&& k>0;i++){
            int maxz = s[i];
            int vt = i;
          for (int j = i+1;j<s.size();j++){
              if (s[j]>=maxz) {
                  maxz = s[j];
                  vt = j;
              }
          }
          if (maxz >s[i]) {
              swap (s[i],s[vt]);
              k--;
          } 

        }
        for(int i = 0;i<s.size();i++){
            cout <<s[i];
        }
        cout <<endl;

    }


    return 0;
}