#include<stdio.h>
#include<io.h>
typedef struct {
    int masv;
    char name[100];
    float a,b,c;
}sinhvien;
sinhvien sv;
void add(){
    FILE *a= fopen ("abczd.bin","ab+");
    int n=filelength(fileno(a))/sizeof(sv);
    int num;
     scanf("%d ", &num);
     for (int i=0;i<num;i++){
         ++sv.masv;
         gets(sv.name);
         if (i<num-1) scanf("%f%f%f ",&sv.a,&sv.b,&sv.c);
         else scanf("%f%f%f",&sv.a,&sv.b,&sv.c);
         fwrite(&sv,sizeof(sv),1,a);
     }
     printf("%d",num);
     fclose(a);
}
void sua (){
    FILE *a= fopen ("abczd.bin","rb+");
      int n=filelength(fileno(a))/sizeof(sv);
      sinhvien tmp[100];
      for (int i=0;i<n;i++){
          fread(&sv, sizeof(sv),1,a);
          tmp[i]=sv;
      }
      fclose(a);
      sinhvien tmp1;
      scanf("%d ",&tmp1.masv);
      gets(tmp1.name);
      scanf("%f%f%f",&tmp1.a,&tmp1.b,&tmp1.c);
      for (int i=0;i<n;i++){
          if (tmp[i].masv==tmp1.masv){
              tmp[i]=tmp1;
                break;
          }
      }
     a= fopen ("abczd.bin","wb+");
      for (int i=0;i<n;i++){
          fwrite(&tmp[i],sizeof(tmp[i]),1,a);
      }
      printf("%d",tmp1.masv);
      fclose(a);
}
void in(){
    FILE *a= fopen ("abczd.bin","rb+");
      int n=filelength(fileno(a))/sizeof(sv);
      sinhvien tmp[100];
      for (int i=0;i<n;i++){
          fread(&sv,sizeof(sv),1,a);
          tmp[i]=sv;
      }
      fclose(a);
      for (int i=0;i<n-1;i++){
          for (int j=i+1;j<n;j++){
              float S=tmp[i].a+tmp[i].b+tmp[i].c;
              float S2=tmp[j].a+tmp[j].b+tmp[j].c;
              if (S>S2){
                  sinhvien tmp1;
                  tmp1=tmp[i];
                  tmp[i]=tmp[j];
                  tmp[j]=tmp1;
              }
          }
      }
      for (int i=0;i<n;i++){
          printf ("%d %s %.1f %.1f %.1f\n",tmp[i].masv,tmp[i].name, tmp[i].a,tmp[i].b,tmp[i].c);
      }
}
int main(){
    int n;
    scanf("%d", &n);
    if (n==1) add();
    if (n==2) sua();
    if (n==3) in();
	return 0;
}
