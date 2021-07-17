#include<stdio.h>
#include<io.h>
#include<string.h>
typedef struct {
    int id;
    int try;
    char name[100];
    int price;
}Tien;
Tien tien;
void add (){
    int S=0,S1=0;
    FILE *a= fopen ("B19DCCN389.bin", "ab+");
    tien.id = filelength (fileno(a))/sizeof (tien);
    int num;
    scanf("%d\n", &num);
    for (int i=0;i<num;i++){
        ++tien.id;
        scanf("%d\n", &tien.try);
        if (tien.try==1) S++;
        else S1++;
        gets(tien.name);
        if (i<num-1) scanf("%d",&tien.price);
        else scanf("%d",&tien.price);
        fwrite(&tien, sizeof (tien),1,a);
    }
    fclose(a);
    printf("%d %d",S,S1);
}
void update(){
    FILE *a= fopen ("B19DCCN389.bin", "rb+");
    int n=filelength (fileno(a))/sizeof (tien);
    Tien tmp[100];
    for (int i=0;i<n;i++){
        fread(&tien,sizeof(tien),1,a);
        tmp[i]=tien;
    }
    fclose(a);
    Tien fix;
    scanf("%d\n", &fix.id);
    scanf("%d\n",&fix.try);
    gets(fix.name);
    scanf("%d",&fix.price);
    for (int i=0;i<n;i++){
        if (tmp[i].id==fix.id)  tmp[i]=fix;
    }
    a=fopen("B19DCCN389.bin","wb+");
    for (int i=0;i<n;i++){
        fwrite(&tmp[i],sizeof(tmp[i]),1,a);
    }
    fclose(a);
    printf("%s",fix.name);
}
void in (){
    FILE *a= fopen("B19DCCN389.bin", "rb+");
    int n=filelength (fileno(a))/sizeof (tien);
    Tien tmp[100];
    for (int i=0;i<n;i++){
        fread(&tien,sizeof(tien),1,a);
        tmp[i]=tien;
    }
    fclose(a);
    int tongthu=0,tongchi=0;
    for (int i=0;i<n;i++){
        if (tmp[i].try==1)  tongthu=tongthu+tmp[i].price;
        else tongchi=tongchi+tmp[i].price;
    }
    printf("%d %d %d",tongthu,tongchi,tongthu-tongchi);
}
int main (){
    int n;
    scanf("%d", &n);
    if (n==1) add();
    if (n==2) update();
    if (n==3) in();

    return 0;
}