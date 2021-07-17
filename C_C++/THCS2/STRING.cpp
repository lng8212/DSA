#include<stdio.h>
#include<string.h>
#define max 100
void zzz(char a[]){
     for (int i=0;i<strlen(a);i++){
       if (a[i]>='a' && a[i]<='z') a[i]=a[i]-'a'+'A';
        else if (a[i]>='A' && a[i]<'Z') a[i]=a[i]-'A'+'a';
   }
}
int main(){
    /*
    1. Khai báo và sử dụng
    -CÚ PHÁP:
    [char][tên chuỗi][kích thước];
    -LƯU Ý:
     + Khi làm việc với kí tự dùng nháy đơn
     + Chuỗi dùng nháy kép
     + Khi khởi tạo chuỗi bằng chuỗi giá trị, C tự động thêm kí tự kết thúc chuỗi (NULL)
     + %s xuất kí tự trong chuỗi cho tới khi nhìn thấy NULL
     + Không có phép gán 
    */
//     //TH1. khai( báo và khởi tạo
//    // char str[]={'t','h','c','s','2'};
//    //TH2, khai báo và gán:
//    char str[10]={};

//   // char str[]="thcs2";//(5+1) x 1 =6.

//     printf("%d", sizeof(str));
//     for (int i=0;i<sizeof(str);i++){
//         printf("%c",str[i]);
//     }
//     printf("\n%s",str);
   /* 2.Nhập xuất chuỗi (4-5)
    -T1: Coi là mảng 1 chiều kí tự
        + Sử dụng chuỗi đặc tả là %c
        +getchar()
    -T2:  sử dụng chuỗi đặc tả %s
       + % khi nhập, cho phép lấy các kí tự trên 1 dòng không bao gồm khoảng trắng.
        + có thể sử dụng chuỗi định dạng %ns đế giới hạn n kí tự.
    - T3 : gets, puts,
        + gets lấy các kí tự trong 1 dòng có bao gồm cả khoảng trắng.
        + gets không cho phép giới hạn số kí tự nhập -> hàm nguy hiểm
        + puts tự dộng thêm 1 dòng mới khi kết thúc xuất chuỗi.
    -T4: sử dụng hàm fgets và fputs
        + fgets cho giới hạn kí tự nhập
    -T5: sử dụng biểu thức chính quy (regex)
        + [^\n] (pattern mẫu) ^: không.
        + [a.z] từ a đến z

        */
    //    char s[100]={};
    //  //  fgets(s,10,stdin);// nhập
    //  scanf("%10[^\n]",s);
    //    fputs(s, stdout);// xuất
       /*
    3. Các dạng bài tập(3)
      - Tương tự mảng 1 chiều.
      ---- Các hàm trong thư viện string.h
      - Xử lí kí tự
      - chuẩn hoá chuỗi
    4. Ví dụ(2)
    ex1: viết chương trình nhập chuỗi, chuyển in hoa thành thường và thường thành hoa.
    */
    /*
    Chuỗi ( xâu, string)
    - Trong C không có string
    - Trong C chuỗi là mảng 1 chiều các kí tự(1), có kí tự kết thúc chuỗi là NULL ('\0 giá trị 0) (2)
    */

   char s[max]={0};
   gets(s);
  // zzz(a);
  int sk=0,ss=0,sc=0;
  for (int i=0;i<strlen(s);i++){
      if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) sc++;
      else if (s[i]>='0'&& s[i]<='9') ss++;
      else  sk++;
  }
    printf("%d %d %d",ss,sc,sk);
    return 0;
}