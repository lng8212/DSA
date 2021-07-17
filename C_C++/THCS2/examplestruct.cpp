#include<stdio.h>
#include<stdlib.h>
typedef struct tacgia{
    char name[100];
    int tuoi;
}tacgia;
typedef struct sach {
    char ten[100];
    int page;
    int sotg;
    tacgia *z;
}sach;
int main(){
    sach a;
    gets(a.ten);
    scanf("%d ", &a.page);
    scanf ("%d ", &a.sotg);
    a.z=(tacgia*)(malloc(a.sotg*sizeof(tacgia)));
    for (int i=0;i<a.sotg;i++){
        gets(a.z[i].name);
   if (i<a.sotg-1)    scanf("%d ", &a.z[i].tuoi);
   else  scanf("%d", &a.z[i].tuoi);

    }
    printf("%s %d %d \n", a.ten, a.page, a.sotg);
     for (int i=0;i<a.sotg;i++){
         printf("%s %d",a.z[i].name,a.z[i].tuoi);
    }
    return 0;
}