#include<bits/stdc++.h>
#include "Nguoi.h"
using namespace std;

class Bandoc : public Nguoi {
    private:
    static int dem;
    int idthe;
    string type;
    public:
    Bandoc (){}
    friend class QL;
    void Nhaptt(){
        Nguoi::Nhaptt();
        cout <<"\n Nhap loai: ";
        dem++;
        getline(cin,type);
    }
    void Intt(){
        Nguoi::Intt();
        idthe=dem;
        cout <<"\nID the doc: "<<idthe;
    }
};
int Bandoc::dem = 9999;