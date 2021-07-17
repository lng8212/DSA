#include<stdio.h>
#include<string.h>
#include<io.h>
#include<math.h>
typedef struct {
    int code;
    char name[100];
    float nhap,xuat;
}Sp;
Sp sp;
void add (){
    FILE  *a= fopen ("QLTT.bin", "wb+");
    sp.code= filelength(fileno(a))/sizeof(sp);
    int n;
    scanf("%d ", &n);
    for (int i=0;i<n;i++){
        ++sp.code;
        gets(sp.name);
        if (i<n-1)
        scanf("%f%f ",&sp.nhap, &sp.xuat);
        else 
         scanf("%f%f",&sp.nhap, &sp.xuat);
        fwrite(&sp,sizeof(sp),1,a);
    }
    
    fclose(a);
    printf("%d",n);
}
void update(){
    FILE  *a= fopen ("QLTT.bin", "rb+");
    int n= filelength(fileno(a))/sizeof(sp);
    Sp tmp[100];
    for (int i=0;i<n;i++){
        fread(&sp,sizeof(sp),1,a);
        tmp[i]=sp;
    }
    fclose(a);
    Sp fix;
    scanf("%d ",&fix.code);
    gets(fix.name);
    scanf("%f%f",&fix.nhap, &fix.xuat);
    for (int i=0;i<n;i++){
        if (tmp[i].code == fix.code){
            tmp[i]=fix;
            break;
        }
    }
    a=fopen("QLTT.bin", "wb+");
    for( int i=0;i<n;i++){
        fwrite(&tmp[i],sizeof(tmp[i]),1,a);
    }
    printf("%d", fix.code);
    fclose(a);
}
void in (){
    FILE  *a= fopen ("QLTT.bin", "ab+");
    int n= filelength(fileno(a))/sizeof(sp);
    Sp tmp[100];
    for (int i=0;i<n;i++){
        fread(&sp,sizeof(sp),1,a);
        tmp[i]=sp;
    }
    fclose(a);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (abs(tmp[i].nhap-tmp[i].xuat)<abs(tmp[j].nhap-tmp[j].xuat)){
                Sp swapz = tmp[i];
                tmp[i]=tmp[j];
                tmp[j]=swapz;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf ("%d %s %.2f %.2f\n",tmp[i].code,tmp[i].name,tmp[i].nhap,tmp[i].xuat);
    }
}
void inDs(){
    FILE *a = fopen ("QLTT.bin","rb+");
    int n = filelength(fileno(a))/sizeof(sp);
    Sp tmp[100];
    for (int i=0;i<n;i++){
        fread(&sp,sizeof(sp),1,a);
        tmp[i]=sp;
    }
    fclose(a);
    for (int i=0;i<n;i++){
        if (tmp[i].xuat-tmp[i].nhap>tmp[i].nhap) printf("%d %s %.2f %.2f\n",tmp[i].code, tmp[i].name, tmp[i].nhap, tmp[i].xuat);
    }
}
int main (){
    int n;
    scanf("%d", &n);
    if (n==1) add();
    if (n==3) inDs();
    if (n==2) update();
    
    return 0;
}