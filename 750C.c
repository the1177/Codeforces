#include <stdio.h>

int main()
{
	long int n;
	scanf("%d", &n);
	int rate = 1900;
	int cumulative = 0;

	for (int i = 0; i < n; ++i)
	{
		int c; int d;
		scanf("%d %d", &c, &d);

		if (d == 1)
		{
			if (c < 0)
			{
				rate = rate + (c + 1);
			}
			else
			{
				rate = rate + c;
			}
		}
		if (d == 2)
		{
			rate = rate + c;
		}


		printf("%d", rate );
	}



	return 0;
}