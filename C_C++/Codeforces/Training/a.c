/**
 * @ Author: Your name
 * @ Create Time: 2020-12-24 22:05:12
 * @ Modified by: Your name
 * @ Modified time: 2020-12-24 22:05:15
 * @ Description:
 */

#include<stdio.h>

int main()
{
	int n=15,i,j,k,m,s;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(m=1;m<=2;m++)
	{
		for(s=1;s<=n-1;s++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf("77 101 114 114 121   67 104 114 105 115 116 109 97 115   33 33 33\n\n");
    
return 0;
}