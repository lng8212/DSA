#include<bits/stdc++.h>
typedef struct{
    char name[100];
    int age;
}author; 
typedef struct book{
    int id;
    char name[100];
    int NoOfAuthor;
    author *book_author;
}book;  // typedef +struct
void nhap(book *b){
    scanf("%d ", &b->id);
    gets(b->name);
    scanf("%d", &b->NoOfAuthor);
    b->book_author = (author*)(malloc(b-> NoOfAuthor * sizeof(author)));
   for (int i=0;i<b->NoOfAuthor;i++)
    {
        gets(( b-> book_author+i)-> name);
       if (i<b->NoOfAuthor-1) scanf("%d ", &(b->book_author+i)->age);
       else {
       		scanf("%d", &(b->book_author+i)->age);
	   }
    }
}
void xuat(book b){
     printf("id:%d name:%s",b.id, b.name);
     for (int i=0;i<b.NoOfAuthor;i++){
         printf("\t author: %s %d\n",( b.book_author+i)->name,(b.book_author+i)->age);
     }
}
/*
- Khai báo và sử dụng
- Lưu ý: 
    + Trong C khi khai báo 1 cấu trúc:
        T1: sử dụng từ khoá struct trước tên struct
        T2: sử dụng kết hợp typedef trong định nghĩa cấu trúc;
    + Kích thước của cấu trúc thường không bằng tổng kích thước các phần tử (struct alignment and padding memory)
*/
/*
    Cấu trúc ( trong C)
    - Hàm là tập hợp các câu lệnh đơn để thực hiện 1 công việc chuyên biệt nào đó
        -> sử dụng như 1 lệnh đơn
    - Cấu trúc là tập hợp các biến, để mô tả về 1 đối tượng nào đó
        -> sử dụng như 1 kiểu dữ liệu
*/

int main(){
    /*
        Nhập xuất cấu trúc
        -không sử dụng hàm
        -có sử dụng hàm
        -vấn đề/ hiện tượng trôi lệnh
    */
    book z;
    nhap(&z);
    xuat(z);
   // scanf("%d ", &b.id);
        /*
        - Cách fix trôi lệnh:
            + thêm space hoặc \n đằng sau scanf;
            + fflush(stdin) ** không khuyến nghị
            + gets 1 lần nữa
        */
    // gets(b.name);
    // gets(b.author);
    // printf("id:%d name:%s author:%s",b.id, b.name, b.author);
    // book b;//={10, "thcs ptit", 100};
    // b.id=10;
    // strcpy(b.name, "thcs ptit");
    // b.page=100;
    // printf("book:%d ,name: %s, page: %d\n",b.id, b.name, b.page);
    // book *pb;
    // pb=(book*)malloc(sizeof(book));
    // printf("book:%d ,name: %s, page: %d",pb->id, pb->name,pb->page);
    // return 0;
     /*
      Truy cập các thành phần của biến cấu trúc
    - Nếu biến thường : dùng cú pháp : [biến cấu trúc].[tên]
    - Nếu dùng biến con trỏ: [biến cấu trúc]-> tên
    */
