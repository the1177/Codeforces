#include <stdio.h>

int main()
{
	int M, N, D1, D2;
	scanf("%d %d", &M, &N);

	if (M == 1 || N == 1)
	{
		if (M == 1)
		{
			printf("%d", (N / 2) );
		}
		else if (N == 1)
		{
			printf("%d", (M / 2) );
		}
		else if (M == 1 && N == 1)
		{
			printf("0");
		}
	}
	else if (M % 2 != 0 || N % 2 != 0)
	{
		if (M % 2 != 0)
		{
			D1 = M / 2+1;
		} else if (M % 2 == 0) {D1 = M / 2;}

		if (N % 2 != 0)
		{
			D2 = N / 2+1;
		} else if (N % 2 == 0) {D2 = N / 2;}

		int dominoes = D1 * D2;
		printf("%d", dominoes );

	}
	else
	{
		D1 = M / 2; D2 = N / 2;
		int dominoes = D1 * D2;
		printf("%d", (dominoes) );
	}

	return 0;
}  /* INCOMPLETE, SOLVED ON 50B */