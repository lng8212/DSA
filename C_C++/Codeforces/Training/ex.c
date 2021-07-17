#include<stdio.h>
long long a[1000007],b[1000007];
int main()
{
	int k;
	scanf("%d",&k);
	
	while(k--)
	{
		long long n;
		scanf("%lld",&n);
		for(int i=0; i<n; i++)
		{
			scanf("%lld",&a[i]);
		}
		for(long long i=0; i<n; i++)
		{
			if(a[i]>0)
			{
				b[a[i]]++; 	
			}
        }
        for (int i = 1;i<1000007;i++){
            if (b[i]==0){
                printf("%d\n", i);
                break;
            }
        }
        for (int i = 1;i<1000007;i++){
            b[i] = 0;
        }

    }
}