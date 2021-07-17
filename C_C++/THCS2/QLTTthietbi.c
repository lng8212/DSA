#include<stdio.h>
#include<string.h>
#include<io.h>
typedef struct {
    int code;
    char name[100];
    float gia;
    int nam;
}thietbi;
thietbi tb;
void add (){
    FILE *a= fopen ("B19DCCN389.bin","ab+");
    tb.code = filelength(fileno(a))/sizeof(tb);
    int num;
    scanf("%d ", &num);
    for (int i=0;i<num;i++){
        ++tb.code;
        gets(tb.name);
        if (i<num-1) scanf("%f%d ", &tb.gia,&tb.nam);
        else scanf("%f%d", &tb.gia,&tb.nam);
        fwrite(&tb,sizeof(tb),1,a);
    }
    printf("%d", num);
    fclose(a);

}
void update(){
    FILE *a=fopen ("B19DCCN389.bin", "rb+");
    int n = filelength(fileno(a))/sizeof(tb);
    thietbi temp [100];
    for (int i=0;i<n;i++){
        fread(&tb,sizeof(tb),1,a);
        temp[i]=tb;
    }
    fclose(a);
    thietbi tmp;
    scanf("%d ",&tmp.code);
    gets(tmp.name);
    scanf("%f%d",&tmp.gia, &tmp.nam);
    for (int i=0;i<n;i++){
        if (temp[i].code == tmp.code){
            temp[i]=tmp;
        }
    }
    a=fopen("B19DCCN389.bin", "wb+");
    for (int i=0;i<n;i++){
        fwrite(&temp[i],sizeof(temp[i]),1,a);
    }
    fclose(a);
    printf("%d",tmp.code);
}
void show (){
    FILE *a= fopen ("B19DCCN389.bin","rb+");
    int n = filelength(fileno(a))/sizeof(tb);
    thietbi tmp[100];
    for (int i=0;i<n;i++){
        fread(&tb,sizeof(tb),1,a);
        tmp[i]=tb;
    }
    fclose(a);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (tmp[i].gia<tmp[j].gia){
                thietbi sw;
                sw=tmp[i];
                tmp[i]=tmp[j];
                tmp[j]=sw;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d %s %.1f %d\n", tmp[i].code, tmp[i].name,tmp[i].gia,tmp[i].nam);
    }
}
int main (){
    int n;
    scanf("%d", &n);
    if (n==1) add ();
    if (n==2) update();
    if (n==3) show();
    return 0;
}