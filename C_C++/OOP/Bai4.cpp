#include<bits/stdc++.h>
// #include "Bandoc.h"
// #include "Sach.h"
#include "QL.h"
using namespace std;


int main (){
    vector<Sach *> a;
    int n;
    cin >>n;
    a.resize(n);
    for (int i=0;i<n;i++){
         a[i] = new Sach();
        a[i]->Nhaptt();
    }
    for (int i=0;i<n;i++){
        a[i]->Intt();
    }
    vector<Bandoc*> b;
    int n1;
    cin >>n1;
    b.resize(n1);
    for (int i=0;i<n1;i++){
        b[i]= new Bandoc();
        b[i]->Nhaptt();
    }
    for (int i=0;i<n;i++){
        b[i]->Intt();
    }

    return 0;
}