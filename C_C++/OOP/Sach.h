#include<bits/stdc++.h>
using namespace std;

class Sach {
    private:
        int idsach;
        string name;
        string author;
        string chuyennganh;
        int year;
    public:
    Sach (){}
    friend class QL;
    void Nhaptt(){
        cout <<"\nNhap id sach: ";
        int tmpn ;
        cin>> tmpn;
        idsach= tmpn;
        cin.ignore();
        cout <<"\nNhap ten sach: ";
        getline(cin,name);
        cout <<"\n Nhap tac gia: ";
        getline(cin,author);
        cout <<"\n Nhap chuyen nganh: ";
        getline(cin,chuyennganh);
        cout <<"\nNhap nam xuat ban: ";
        cin >>year;
    }
    void Intt(){
        cout <<"\nId sach: "<<idsach;
        cout <<"\nTen sach: "<<name;
        cout <<"\nTac gia: "<<author;
        cout <<"\nChuyen nganh: "<<chuyennganh;
        cout <<"\nNhap xuat ban: "<<year;
    }
};