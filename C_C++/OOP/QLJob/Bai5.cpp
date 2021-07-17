#include<bits/stdc++.h>
#include "Member.h"
#include "Pos.h"
#include "Assignment.h"
#include "People.h"
using namespace std;
int main()
{
    vector<Member> a;
    vector<Pos> b;
    vector<Assignment> c;
    int k;

    while (1)
    {
        
        cout << "\n\t\tQUAN LI PHAN CHIA TIEN THUONG DU AN";
        cout << "\n\t\t1.Them thanh vien";
        cout << "\n\t\t2.Them cong viec";
        cout << "\n\t\t3.Quan li cong viec thanh vien";
        cout << "\n\t\t4.Sap xep";
        cout << "\n\t\t\t4.1. Theo ho ten";
        cout << "\n\t\t\t4.2. Theo so ngay lam ( giam dan )";
        cout << "\n\t\t5.Tong tien\n";
        cin >> k;
         system("cls");
        if (k == 0)
            break;
        if (k == 1)
        {
            int n;
            cout << " \n\n\t\tNHAP SO LUONG THANH VIEN: ";
            cin >> n;
            a.resize(n);
            for (int i = 0; i < n; i++)
            {
                string name,
                    address, teleNum;
                int salary;
                cout << "\nNHAP THANH VIEN THU: " << i + 1 << "\n";
                cout << "Nhap ten: ";
                cin >> name;
                cout << "\nNhap dia chi: ";
                cin >> address;
                cout << "\nNhap sdt: ";
                cin >> teleNum;
                cout << "\nNhap muc luong: ";
                cin >> salary;
                a[i].setName(name);
                a[i].setAddress(address);
                a[i].setTeleNumber(teleNum);
                a[i].setSalary(salary);
            }
            for (int i = 0; i < n; i++)
            {
                cout << "\nTHONG TIN THANH VIEN THU : " << i + 1 << "\n";
                cout << "Ten: ";
                cout << a[i].getName() << endl;
                cout << "Dia chi: ";
                cout << a[i].getAddress() << endl;
                cout << "SDT: ";
                cout << a[i].getTeleNumber() << endl;
                cout << "Tien luong: ";
                cout << a[i].getSalary() << endl;
                cout << "Ma thanh vien: ";
                cout << a[i].getCodeMember() << endl;
            }
        }
        if (k == 2)
        {
            int n;
            cout << "\n\n\t\tNHAP SO VI TRI CONG VIEC: ";
            cin >> n;
            b.resize(n);
            for (int i = 0; i < n; i++)
            {
                string a;
                int rw;
                cout << "\nCONG VIEC THU : " << i + 1 << "\n";
                cout << "Vi tri cong viec: ";
                cin >> a;
                cout << "\nTien thuong: ";
                cin >> rw;
                b[i].setPosName(a);
                b[i].setReward(rw);
            }
            for (int i = 0; i < n; i++)
            {
                cout << "\nTHONG TIN CONG VIEC: " << i + 1 << "\n";
                cout << "Ten vi tri: ";
                cout << b[i].getPosName() << endl;
                cout << "Tien thuong: ";
                cout << b[i].getReward() << endl;
                cout << "Ma cong viec: ";
                cout << b[i].getPosCode() << endl;
            }
        }
        if (k == 3)
        {
            c.resize(a.size());
            for (int i = 0; i < a.size(); i++)
            {
                cout << "\nNHAP CONG VIEC CUA THANH VIEN THU: " << i + 1 << endl;
                cout << "Ten thanh vien: \n"
                    << a[i].getName() << endl;
                c[i].setMember(a[i]);
                int tmp;
                cout << "\nNhap so cong viec: ";
                cin >> tmp;

                vector<Pair> x;
                x.resize(tmp);
                for (int j = 0; j < tmp; j++)
                {
                    cout << "\nCong viec thu: " << j + 1 << endl;
                    Pos k;
                    string posName;
                    int reward;
                    cout << "Ten vi tri: ";
                    cin >> posName;
                    cout << "\nTien thuong: ";
                    cin >> reward;
                    k.setPosName(posName);
                    k.setReward(reward);
                    x[j].name1 = k;
                    cout << "\nSo ngay lam: ";
                    cin >> x[j].day;
                }
                c[i].setNumJob(x);
                if (c[i].checkNum() == false)
                {
                    cout << "DA LAM QUA BA VI TRI KHAC NHAU, XIN MOI NHAP LAI\n";
                    i--;
                }
            }
            for (int i = 0; i < a.size(); i++)
            {
                cout << "\nQL CONG VIEC CHO THANH VIEN THU: " << i + 1 << endl;
                cout << c[i].getMember().getName() << endl;
                vector<Pair> temp = c[i].getNumJob();
                for (int j = 0; j < temp.size(); j++)
                {
                    Pos z = temp[j].name1;

                    cout << z.getPosName() << " " << z.getReward() << " " << z.getPosCode() << " " << temp[j].day << endl;
                }
            }
        }
        if (k == 4)
        {
            int choice;
            cout << "\nNhap lua chon: ";
            cin >> choice;
            int len = c.size();
            if (choice == 1)
            {
                for (int i = 0; i < len - 1; i++)
                {
                    for (int j = i + 1; j < len; j++)
                    {
                        if (c[i].getMember().getName() > c[j].getMember().getName())
                        {
                            swap(c[i], c[j]);
                        }
                    }
                }
            }
            else if (choice == 2)
            {
                for (int i = 0; i < len - 1; i++)
                {
                    vector<Pair> tmp = c[i].getNumJob();
                    int S = 0;
                    for (int j = 0; j < tmp.size(); j++)
                    {
                        S = S + tmp[j].day;
                    }
                    for (int j = 0; j < len; j++)
                    {
                        vector<Pair> ss = c[j].getNumJob();
                        int S2 = 0;
                        for (int k = 0; k < ss.size(); k++)
                        {
                            S2 = S2 + ss[k].day;
                        }
                    }
                }
            }
        }
        if (k == 5)
        {
            for (int i = 0; i < c.size(); i++)
            {
                cout << "\nTONG TIEN THUONG CUA THANH VIEN THU: " << i + 1 << endl;
                int s = 0;
                vector<Pair> tmp = c[i].getNumJob();
                for (int j = 0; j < tmp.size(); j++)
                {
                    s = s + (tmp[j].name1.getReward() * tmp[j].day);
                }
                cout << (s + s * 0.1) << endl;
            }
        }
    }

    return 0;
}