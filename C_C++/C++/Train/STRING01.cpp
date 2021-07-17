#include<bits/stdc++.h>
using namespace std;


int main (){    
    
        string a;
        getline (cin ,a );
        string b;
        cin >>b;
        vector<string> c;
        for (int i = 0;i<a.size();i++){
            string tmp ;
            while (a[i]!=' ' && i<a.size()){
                tmp.push_back(a[i]);
                i++;
            }
            c.push_back(tmp);
        }
        for (int i = 0;i<c.size();i++){
            string z= c[i];
            if (b!=z) cout <<z<<" ";
        }

    return 0;
}