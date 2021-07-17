#include<bits/stdc++.h>
using namespace std;
/*
    Lập trình hướng đối tượng là gì:
        +) Tập chung vào đối tượng/ hướng vào đối tượng.
        +) Xử lí các vấn đề xoay quanh đối tượng cụ thể.
    CLASS - lớp :
        +) là một cấu trúc bao gồm cá thuộc tính ( đặc điểm) và các phương thức (hành vi) của đối tượng.
        +) mô tả cụ thế các hành vi hay thuộc tính của đối tượng hướng tới.
        +) là kiểu dữ liệu do người dùng tạo ra.
        +) nhãn phạm vi: 
            +Private: Riêng tư - chỉ có thể truy cập trong class;
            + Public: Công khai -  truy cập ở mọi nơi.
            + Protected: // kế thừa.
        +) Một bản thiết kế của đối tượng hướng tới.
    - Object - đối tượng : là 1 sự vật, đặc điểm có hành vi đặc trưng.
    -> Object được xây dựng từ class ở trên.

    Cách khai báo class :
    Class <tên class> {
        private:
            <thuộc tính>
            tên, tuổi, birthday,...
            hành động: suy nghĩ,...
        public:
            màu áo trắng
            hành vi : gõ bàn phím, đi, đứng,...
    };
    Hàm tạo: 
    + Constructor: tạo đối tượng - trong class luôn có.
    Hàm huỷ:
    + Destructor: huỷ đối tượng - gọ khi kết thúc chương trình  hoặc xoá đi đối tượng đó
    tên class <tên đối tượng>

*/
// Thực hành
/*
     Muốn tạo ra một con người:
     Đặc điểm, thông tin:
      +) Tên tuổi, ngày tháng năm sinh, quê quán, lớp học
      +) màu mắt, màu da, giới tính, quốc tịch
     Hành động: 
        +) Đi 
        +) Đứng, nằm, ngồi, ngủ nghỉ, làm việc, ăn uống, suy nghĩ, nói chuyện
*/
class Person {
    private: 
        string ten;
        int tuoi;
        string dateofbirth;
        string address;
        bool gender; // 0 : nam, 1 : nữ

    public:
        //Constructor:
        //  Overloading : Nap chong ham
        Person(){

        }
        Person (string name, int age){
            ten = name;
            tuoi = age;
        }
        void NhapThongTin(){
            cout <<"Nhap ten: ";
            getline(cin,ten);
            cout <<"Nhap tuoi: ";
            cin >>tuoi;
        }
        void Output(){
            cout <<"Ten: "<<ten<<"\nTuoi: "<<tuoi<<endl;
        }
        bool check (){
            if (tuoi %2==0) return 1;
            return 0;
        }

};
/*  
    Tạo ra 1 sinh viên : 
    Đặc điểm, thông tin:
     + Tên, mã SV, lớp, trường, khoa, quê quán, ngày sinh
     + Có người yêu chưa.
    Sinh viên:
     + Học
     + Chơi game
     + Ngủ
     + Ôn thi
     + Thi
*/
class student {
    private: 
        string name, maSv, schoolName, major, address, dateofBirth;
        float CPA,GPA;
        bool gender; 
        bool hasGfBf;
    public:
        student (){};
        student (string name, string maSv, string schoolName){
            this->name = name;
            this -> maSv = maSv;
            this -> schoolName = schoolName;
        }
        void Input (){
            cout <<"Nhap ten: "; getline(cin,name);
             cout <<"Nhap masv: "; getline(cin,maSv);
              cout <<"Nhap school: "; getline(cin,schoolName);
        }
        void Study(){
            
        }
        void Output (){
            cout << "Ten: "<<name<<"\nMasv: "<<maSv<<"\nSchool :"<<schoolName;
        }
};
class GVCN {
    private :
    string name;
    int tuoi;
    public:
    GVCN(){};
    GVCN(string name, int tuoi){
        this-> name = name;
        this -> tuoi = tuoi;
    }
    void dayhoc (){
        cout <<"GV dang day mon X"<<endl;
    }
    void Input (){
        cout <<"ten gv: "; getline(cin, name);
        cout <<" tuoi gv: "; cin >>tuoi;
        cin.ignore();
    }
    void Output(){
        cout <<"ten gv: "<<name<<endl<<"tuoi gv:"<<tuoi<<endl;
    }
};
class Class {
    private:
    GVCN giaoVien;
    int soluongSv;
    vector<student> list_SV;
    public:
    Class (){};
    Class (GVCN gv, vector<student> s){
        giaoVien = gv;
        list_SV=s;
        soluongSv=s.size();
    }
};
int main (){
    Person person1;
    // person1.NhapThongTin();
    // person1.Output();
    // cout <<endl<<person1.check();
    student stu;
    stu.Input();
    stu.Output();
    return 0;
    // use point !!!!!
    
}