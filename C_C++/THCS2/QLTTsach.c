#include<stdio.h>
#include<string.h>
#include<io.h>
typedef struct {
    int code;
    char name[100];
    char tg[100];
    float price;
}Sach;
Sach sach;
void add (){
    FILE *a = fopen ("B19DCCN389","wb+");
    sach.code = filelength(fileno(a))/sizeof(sach);
    int num;
    scanf("%d ", &num);
    for (int i=0;i<num;i++){
        ++sach.code;
        gets(sach.name);
        gets(sach.tg);
       if (i<num-1) scanf("%f ",&sach.price);
       else scanf("%f",&sach.price);
        fwrite(&sach,sizeof(sach),1,a);
    }
    fclose(a);
    printf("%d", num);
}
void update(){
     FILE *a = fopen ("B19DCCN389","rb+");
     int n=filelength(fileno(a))/sizeof(sach);
     Sach tmp[100];
     for (int i=0;i<n;i++){
         fread(&sach, sizeof(sach),1,a);
         tmp[i]=sach;
     }
     fclose(a);
     Sach b;
     scanf("%d ",&b.code);
     gets(b.name);
     gets(b.tg);
     scanf ("%f",&b.price);
     for (int i=0;i<n;i++){
         if (tmp[i].code==b.code){
             tmp[i]=b;  
         }
     }
     a=fopen ("B19DCCN389", "wb+");
     for (int i=0;i<n;i++){
         fwrite(&tmp[i],sizeof(tmp[i]),1,a);
     }
     fclose(a);
     printf("%s",b.name);
}
void in (){
    FILE *a = fopen ("B19DCCN389","rb+");
    int n=filelength(fileno(a))/sizeof(sach);
     Sach tmp[100];
     for (int i=0;i<n;i++){
         fread(&sach, sizeof(sach),1,a);
         tmp[i]=sach;
     }
     fclose(a);
     for (int i=0;i<n-1;i++){
         for (int j=i+1;j<n;j++){
             if (tmp[i].price>tmp[j].price){
                 Sach sw=tmp[i];
                 tmp[i]=tmp[j];
                 tmp[j]=sw;
             }
         }
     }
     for (int i=0;i<n;i++){
         printf("%d %s %.2f %s\n", tmp[i].code,tmp[i].name,tmp[i].price,tmp[i].tg);
     }
}
int main (){
    int n;
    scanf("%d", &n);
    if(n==1) add();
    if (n==2) update();
    if (n==3)   in();
    return 0;
}