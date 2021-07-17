#include<stdio.h>
typedef struct {
    int id;
    char name[100];
}book;
FILE *fptr;
book b;
void nhap(){
 scanf("%d ",&b.id);
    gets (b.name);
    FILE *fptr= fopen("ex2.bin","ab");
    fwrite(&b,sizeof(b),1,fptr);
    fclose(fptr);
}
void sua(){
    fptr= fopen("ex2.bin","rb+");
      book temp;
    scanf("%d ", &temp.id);
    gets(temp.name);
    while (fread(&b,sizeof(book),1,fptr)){
        if (b.id==temp.id){
            fseek(fptr,-sizeof(book),SEEK_CUR);
            fwrite(&temp,sizeof(book),1,fptr);
            break;
        }
    }


}
void xuat(){
book temp;
    fptr= fopen ("ex2.bin", "rb");
    int result= fread(&temp,sizeof(book),1,fptr);
    while (result!=0){
      printf("%d %s",temp.id, temp.name);
         result=fread(&temp,sizeof(book),1,fptr);
    }
  
   
      fclose(fptr);
}
int main (){
  
   nhap();
   sua();
    xuat();
   
    

    /*
     /*viet ct ghi tt sach vao file va in ra man hinh*/
    // FILE *fptr= fopen("ex1.txt","r");

    // if (fptr==NULL) {

    //     printf("File khong ton tai");
    //     return 1;
    // }
    // printf("Mo file thanh cong");
    // fclose(fptr);
    //printf("%d %s",10, "hoa vang");
    // fprintf(fptr,"%d %s",10, "hoa vang");
     //fclose(fptr);
    // rewind(fptr);  // đưa con trỏ về đầu file
   // fseek(fptr,0,SEEK_SET); // SEEK_SET  | SEEK_CUR | SEEK_END
    //  int id;
    //  char name[50];
    // fptr = fopen("ex1.txt","r");
    // fscanf(fptr,"%d ", &id);
    // fgets (name, 50, fptr);
    // fclose(fptr);
    // printf("%d %s", id, name);
    /*
    FILE 
    1. Khái niệm, giới thiệu
    - là dữ liệu dưới dạng byte được lưu trữ dưới dạng bộ nhớ thứ cấp (ROM), định danh và quản lí bởi HĐH/
    - định danh 
        + tên file
        + phần mở rộng file
    -Ex1:
        + Ex1.c ( mã nguồn C), ex1.doc(word)..
    - Text File                                     -Binary File
    + Văn bản                                       + Nhị phân
    + đọc, in                                       + Không đọc, in
                                                    -> định dạng nào đó
    + .txt                                            + .bin(.dat,.data,...)
    -> text mode                                      +binary mode
    2. Các thao tác với FILE
    - mở file 
        + CÚ PHÁP : FILE *FOPEN("Đường dẫn", "mode mở file");
    -> text file
    - Trong đó : 
                                            file khong tồn tại                      vị trí con trỏ file
        + r(read);                          trả về NULL                             nằm ở đầu file
        + w (write);                        tạo file mới                            nằm ở đầu file  (ghi đè)
        + a (append)  - ghi thêm            tạo file mới                            nằm ở cuối file ( ghi tiếp)
    ->binary file
    - Trong đó : 
                                            file khong tồn tại                      vị trí con trỏ file
        + rb(read);                          trả về NULL                             nằm ở đầu file
        + wb (write);                        tạo file mới                            nằm ở đầu file  (ghi đè)
        + ab(append)  - ghi thêm            tạo file mới                            nằm ở cuối file ( ghi tiếp)
    -> mở rổng text file:
    - Trong đó : 
                                            file khong tồn tại                      vị trí con trỏ file
        + r+(read);                          trả về NULL                             nằm ở đầu file
        + w+ (write);                        tạo file mới                            nằm ở đầu file  (ghi đè)
        + a+ (append)  - ghi thêm            tạo file mới                            nằm ở cuối file ( ghi tiếp)
    -> mở rộng Binary file
        - Trong đó : 
                                            file khong tồn tại                      vị trí con trỏ file
        + rb+(read);                          trả về NULL                             nằm ở đầu file
        + wb+ (write);                        tạo file mới                            nằm ở đầu file  (ghi đè)
        + ab+ (append)  - ghi thêm            tạo file mới                            nằm ở cuối file ( ghi tiếp)
    - Đóng file
        fclose(FILE*fptr)
    3. Vào ra FILE
        + fprintf/fscanf (tương tự printf/ scanf)
        + fputs/fgets (tương tự như puts/gets)
        -> File văn bản

        + fwrite / fread (cấu trúc)
        -> file nhị phân
    */
    return 0;
}