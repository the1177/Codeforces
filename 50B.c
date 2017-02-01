#include <stdio.h>

int main()
{
	int M, N, D = 0;
	scanf("%d %d", &M, &N);
	int area = M * N;
	while (area > 0)
	{
		if ( (area - 2) >= 0)
		{
			area = area - 2;
			D ++;
		}
		else
		{
			break;
		}
	}
	
	printf("%d", D);

	return 0;
}