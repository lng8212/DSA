#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double d,e,f,g;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	e=(-b+sqrt(d))/(2*a);
	f=(-b-sqrt(d))/(2*a);
	g=-b/(2*a);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0) printf("VO SO NGHIEM");
			else printf("VO NGHIEM");
		}
		else printf("%.2lf",(float)-c/b);
	}
	else
	{
		if(d>0) 
		{
		 if(e>f) printf("%.2lf %.2lf",e,f);
		 else printf("%.2lf %.2lf",f,e);
	    }
		else if(d<0) printf("VO NGHIEM");
		else printf("%.2lf",g);
	}
	return 0;
}