#include <stdio.h>
#include <string.h>

int main()
{
	unsigned long long n, m, a;
	scanf("%llu %llu %llu", &n, &m, &a);
	
	if (n % a == 0 && m % a == 0)
	{
		printf("%llu", (n/a)*(m/a) );
	}
	else
	{
		if (n % a != 0)
		{
			if (m % a !=0)
			{
				printf("%llu", (n/a+1)*(m/a+1) );
			}
			else
			{
				printf("%llu", (n/a+1)*(m/a) );
			}
		}
		else
		{
			printf("%llu", (n/a)*(m/a+1) );
		}
	}
	return 0;
}  