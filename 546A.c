#include <stdio.h>

int main()
{
	long int cost, money, wants;
	scanf("%ld %ld %ld", &cost, &money, &wants);
	long int totalcost = 0;

	for (int i = 1; i < wants+1; ++i)
	{
		totalcost += (i*cost);
	}

	if (totalcost > money)
	{
		int owe = (totalcost - money);
		printf("%d\n", owe );
	}
	else
	{
		printf("0\n");
	}

	return 0;
}