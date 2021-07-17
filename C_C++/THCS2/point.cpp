#include<stdio.h>
#include <stdlib.h>
void swap( int *a, int *b){
    int tmp= *a;
    *a=*b;
    *b=tmp;
}
void nhap (int *a, int n){
    for (int i=0;i<n;i++){
        scanf("%d", a+i);
    }
}
void xuat (int *a, int n){
    for (int i=0;i<n;i++){
    printf("%d ", *(a+i));
    }
    printf("\n");
}
int main(){
    int n=0,*a;
    scanf("%d", &n);
   // int a[max];
   //a=(int*)malloc (n*sizeof(int)); // kích thước
     a=(int*)calloc(n,sizeof(int));
    nhap(a,n);
    xuat(a,n);
     a = realloc (a,(n+1)*sizeof(int));
     a[n]=100;
     xuat(a,n+1);
    free (a);
/*
Con trỏ (biến con trỏ)
- Con trỏ cũng là 1 biến (1), lưu địa chỉ của biến khác (2) --> có 1 cách truy cập khác (alias) tới biến mà con trỏ trỏ tới (3)

        + biến kiểu dữ liệu cơ sở
        + mảng, chuỗi
        + kiểu dữ liệu tư định nghĩa 
        + hàm, con trỏ
- Ứngs dụng/ ưu điểm
        + truyền địa chỉ ( không cần tạo bản sao của dữ liệu tại hàm cục bộ)
        + cấp phát và giải phóng bộ nhớ động(stdlib.h)
            + malloc(memory allocation)
                + cấp phát theo kích thước
                + không quan tâm tới giá trị hiện thời của vùng nhớ được cấp
                -> nhanh
            + calloc (continous allocation)
                + cấp phát lần lượt từng phần tử theo kích thước
                + đặt lại giá trị mặc định cho từng phần tử (0)
                -> chậm
            + relloc (re allocation)
                + copy toàn bộ giá trị từ vùng nhớ cũ sang vùng nhớ mới
        + con trỏ hàm(x)
        + mảng, con trỏ



*/
// int a = 5;
// printf("val %d, size %d, add %d\n", a,sizeof(a), &a);

// int *pa = &a; // khai báo và khởi tạo biến con tỏ pa trỏ tới biến a
// printf("val %d, size %d, add %d\n", pa,sizeof(pa), &pa);
// *pa=100;
// printf("%d %d",a,*pa);

/*
    Khai báo và sử dụng:
    - Cú pháp :
    [kiểu dữ liệu] *[tên con trỏ/ tên  biến];
    - Trong đó :
        + * để chỉ ra biến là biến con trỏ
        + [kiểu dữ liệu] là kiểu dữ liệu của biến mà con trỏ trỏ tới
    - Kích thước của con trỏ không phu thuộc tới kích thước của biến mà con trỏ trỏ tới
        + con trỏ lưu địa chỉ (giá trị mà nó biểu diễn)
        + * khi gặp ở khai báo ( biến , tham số truyền vào hàm) để chỉ ra biến là biến con trỏ 
        + * khi gặp là toán tử 1 ngôi đi kèm với biến con trỏ -> để truy cập tới biến mà con trỏ trỏ tới( alias)


*/
  return  0;
}