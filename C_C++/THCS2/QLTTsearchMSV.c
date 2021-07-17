#include<stdio.h>
#include<string.h>
#include<io.h>
typedef struct {
    int id;
    char code[100];
    char name[100];
}stu;
stu sv;
void newAdd(){
    FILE *a= fopen("tryz.bin","wb+");
    sv.id= filelength(fileno(a))/sizeof(sv);
    int m;
    scanf("%d\n", &m);
    for (int i=0;i<m;i++){
        ++sv.id;
        gets(sv.code);
        gets(sv.name);
        fwrite(&sv,sizeof(sv),1,a);
    }
    printf("%d",m);
     fclose(a);
    
}
void update(){
    FILE *a = fopen("tryz.bin","rb+");
    stu tmp[100];
    
    int n= filelength(fileno(a))/sizeof(sv);
    for (int i=0;i<n;i++){
        fread(&sv,sizeof(sv),1,a);
        tmp[i]=sv;
    }
   
    fclose(a);
    
    char ac[100];
    gets(ac);
    gets (ac);
    stu fix;
    gets(fix.code);
    gets(fix.name);
    for (int i=0;i<n;i++){
        if (strcmp(ac,tmp[i].code)==0){
                strcpy(tmp[i].name,fix.name);
                strcpy(tmp[i].code,fix.code);
        }
    }
    a=fopen("tryz.bin","wb+");
    for (int i=0;i<n;i++){
        fwrite(&tmp[i],sizeof(tmp[i]),1,a);
    }
    printf("%s",fix.code);
    fclose(a);
}
void find(){
    stu tmp[100];
    FILE *a=fopen("tryz.bin","rb+");
    int n = filelength(fileno(a))/sizeof(sv);
    for (int i=0;i<n;i++){
        fread(&sv,sizeof(sv),1,a);
        tmp[i]=sv;
    }
    fclose(a);
    char c[100];
    gets(c);
    gets(c);
    for (int i=0;i<n;i++){
        char *d=strstr(tmp[i].code,c);
        if (d!=NULL){
            printf("%d %s %s\n",tmp[i].id,tmp[i].name,tmp[i].code);
        }
    }
  
}
int main(){
    int n;
    scanf("%d",&n);
    if (n==1) newAdd();
    if (n==2) update();
    if (n==3) find();
    return 0;
}