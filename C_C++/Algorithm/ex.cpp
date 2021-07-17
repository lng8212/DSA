#include<stdio.h>
#include<conio.h>
 
int main()
{
    // nhap vao n
    int n;
    printf("Nhap vao n : ");
    scanf("%d", &n);
 
    printf("\nCac bo hoan vi la :\n");
 
    // khoi tao mang gom n phan tu
    int mang[n];
 
    // gan gia tri cho cac phan tu cua mang va in ra bo hoan vi dau tien
    int i;
    for(i = 0; i < n; i++)
    {
        mang[i] = i + 1;
        printf("%d  ", mang[i]);
    }
 
    // xu ly de in ra cac bo hoan vi tiep theo
    for(i = n - 1; i > 0; i--)
    {
        // neu gap mang[i] > mang[i - 1]
        if(mang[i] > mang[i - 1])
        {
            int j;
 
            // tim trong bo cuoi giam dan phan tu vua du lon hon mang[i - 1] sau do swap.
            for(j = n - 1; j >= i; j--)
            {
                if(mang[j] > mang[i - 1])
                {
                    int temp = mang[j];
                    mang[j] = mang[i - 1];
                    mang[i - 1] = temp;
                    break;
                }
            }
 
            // dao nguoc bo cuoi
            for(j = n - 1; j > ((n - 1 + i) / 2); j--)
            {
                int temp = mang[i + n - 1 - j];
                mang[i + n - 1 - j] = mang[j];
                mang[j] = temp;
            }
 
            // in ra bo hoan vi moi
            printf("\n");
            for(j = 0; j < n; j++)
            {
                printf("%d  ", mang[j]);
            }
 
            // i = n de khi thoat vong lap hien tai i-- thanh i = n - 1; va vong lap chay lai tu dau.
            i = n;
        }
    }
 
    return 0;
}