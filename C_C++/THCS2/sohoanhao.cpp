#include <stdio.h>
#include <math.h>

int main()
{
	long long n, s = 1;
	scanf("%d", &n);
	for (int i = 2; i < n; i++)
	{
		for (int a = 2; a < sqrt(i); a++)
		{
			if (i % a == 0)
			{
				s = s + a + i / a;
			}
		}
		if (s == i)
		{
			printf("%d ", i);
		}
		s = 1;
	}
	return 0;
}
