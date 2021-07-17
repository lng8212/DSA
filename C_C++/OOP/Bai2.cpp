#include<bits/stdc++.h>
using namespace std;
ofstream fi;
/*
 tạo ra lớp công nhân và cán bộ kế thừa từ lớp người
*/
class Nguoi {
    protected:
        string name;
        int age;
        bool gender;
        string ht;
    public:
        Nguoi(){}
        Nguoi (string name, int age, bool gender,string ht){
            this-> name = name;
            this -> age = age;
            this -> gender = gender;
            this -> ht = ht;
        }
        void Input(){
            cout<<"Ten : ";
            getline (cin, name);
            cout <<"Tuoi: "; cin >>age;
            cout <<"Gioi tinh: "; cin>>gender;
            cin.ignore();
            cout <<"Que quan: ";getline (cin, ht);
        }

        
};
class CongNhan : public Nguoi {
    private:
     int songaylam;
    public:
      //  CongNhan (){}
      //  CongNhan(string name, int age, bool gender, string ht, int songaylam):Nguoi(name,age,gender,ht){
            // this-> name = name;
            // this -> age = age;
            // this -> gender = gender;
            // this -> ht = ht;
       //     this -> songaylam = songaylam;
      //  }
        void Nhap (){
            this -> Input();
            cout <<"So ngay lam : ";
            cin >> songaylam;
            cin.ignore();
        }
        void getAll (){
            fi <<"Ten: "<<name<<"\n"<<"Tuoi: "<<age<<"\n"<<"Gioi tinh: "<<gender<<"\n"<<"Que quan: "<<ht<<"\n"<<"So ngay lam: "<<songaylam<<endl;
        }
};
class CanBo : public Nguoi {
    private: 
    int hesoluong;
    public:
        CanBo(){}
       // CanBo(string name, int age, bool gender, string ht, int hesoluong):Nguoi (name,age,gender,ht){
        //    this -> hesoluong = hesoluong;
      //  }
        void Nhap (){
            cout <<"NHAP THONG TIN CAN BO: \n";
            this->Input();
            cout <<"He so luong: ";
            cin >>hesoluong;
            cin.ignore();
        }
        void getAll(){
             fi <<"Ten: "<<name<<"\n"<<"Tuoi: "<<age<<"\n"<<"Gioi tinh: "<<gender<<"\n"<<"Que quan: "<<ht<<"\n"<<"He so luong: "<<hesoluong<<endl;
        }


};
class Xuong {
    private:
    CanBo canbo;
    CongNhan tmp;
    // Nguoi nguoi1;
    vector<CongNhan> congnhan;
    public:
        void Input(){
            // nguoi1.Input();
            canbo.Nhap();
             cout <<"NHAP THONG TIN CONG NHAN THU: ";
            for (int i =0;i<3;i++){
                cout <<i+1<<endl;
                tmp.Nhap();
                congnhan.push_back(tmp);
            } 
        }
        void Output (){
            fi<<congnhan.size();
            canbo.getAll();
            for (int i=0;i<congnhan.size();i++){
                congnhan[i].getAll();
            }
        }
};
int main (){
    fi.open("test.txt");
    Xuong c;
    c.Input();
    c.Output();
    fi.close();



    return 0;
}