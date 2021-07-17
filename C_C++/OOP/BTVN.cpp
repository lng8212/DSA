#include <bits/stdc++.h>
using namespace std;
class CongNhan
{
private:
    string name;
    int age;
    bool gender; // 0 la nam 1 la nu
    string ht;
    int day;
public:
    CongNhan(){};
    void Input()
    {
        cout << "Ten: ";
        getline(cin, name);
        cout << "\nTuoi: ";
        cin >> age;
        cout << "\nGioi tinh: ";
        cin >> gender;
        cin.ignore();
        cout << "\nQue quan: ";
        getline(cin, ht);
        cout << "\nSo ngay lam cong: ";
        cin >> day;
        cin.ignore();
    }
    void Output()
    {
        cout << "Ten: " << name << "\t"
             << "Tuoi: " << age << "\t"
             << "Gioi tinh: " << gender << "\t"
             << "Que quan: " << ht << "\t"
             << "So ngay lam cong: " << day << endl;
    }
    int TienLuong()
    {
        return day * 100000;
    }
    int Ngay()
    {
        return day;
    }
    void XepLoai()
    {
        if (TienLuong() < 200000)
            cout << "Kem";
        else
            cout << "Tot";
    }
};
class CanBo
{
private:
    string name;
    int age;
    bool gender;
    string ht;
    int hsl;

public:
    CanBo(){};
    void Input()
    {
        cout << "Ten: ";
        getline(cin, name);
        cout << "\nTuoi: ";
        cin >> age;
        cout << "\nGioi tinh: ";
        cin >> gender;
        cin.ignore();
        cout << "\nQue quan: ";
        getline(cin, ht);
        cout << "\nHe so luong: ";
        cin >> hsl;
        cin.ignore();
    }
    void Output()
    {
        cout << "Ten: " << name << "\t"
             << "Tuoi: " << age << "\t"
             << "Gioi tinh: " << gender << "\t"
             << "Que quan: " << ht << "\t"
             << "He so luong: " << hsl << endl;
    }
};
class Xuong
{
private:
    CanBo canbo;
    int number;
    CongNhan a[1000];

public:
    Xuong(){};
    void Ipcanbo()
    {
        cout << "\n\n\t\tNHAP THONG TIN CAN BO: \n";
        canbo.Input();
    }
    void Ipcongnhan()
    {
        cout << "Nhap so luong cong nhan: \n";
        cin >> number;
        cin.ignore(); 
        cout << "\n\n\t\tNHAP THONG TIN CONG NHAN: \n";
        for (int i = 0; i < number; i++)
        {
            cout << "Thong tin cong nhan thu " << i + 1 << ": ";
            a[i].Input();
        }
    }
    void Sapxepluong()
    {
        for (int i = 0; i < number - 1; i++)
        {
            for (int j = i + 1; j < number; j++)
            {
                if (a[i].TienLuong() < a[j].TienLuong())
                    swap(a[i], a[j]);
            }
        }
    }
    void Sapxepngay()
    {
        for (int i = 0; i < number - 1; i++)
        {
            for (int j = i + 1; j < number; j++)
            {
                if (a[i].Ngay() < a[j].Ngay())
                    swap(a[i], a[j]);
            }
        }
    }
    int tong()
    {
        int S = 0;
        for (int i = 0; i < number; i++)
        {
            S = S + a[i].TienLuong();
        }
        return S;
    }
    void Outputcb()
    {
        cout << "\n\n\t\tTHONG TIN CAN BO: ";
        canbo.Output();
    }
    void Outputcn()
    {
        cout << "\n\n\t\tTHONG TIN CONG NHAN: \n";
        for (int i = 0; i < number; i++)
        {
            cout << "Thong tin cong nhan thu " << i << ": ";
            a[i].Output();
        }
    }
};
int main()
{
    Xuong *xuong1 = new Xuong();
    xuong1->Ipcanbo();
    xuong1->Ipcongnhan();
    cout << "TONG TIEN LUONG CUA CONG NHAN: " << xuong1->tong() << endl;
    xuong1->Sapxepluong();
    xuong1->Sapxepngay();
    xuong1->Outputcb();
    xuong1->Outputcn();

    return 0;
}