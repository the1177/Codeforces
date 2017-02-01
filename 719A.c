#include <stdio.h>

int main()
{
	int days;
	scanf("%d", &days);
	int size[days];

	if (days == 1)
	{
		int only; scanf("%d", &only);
		if (only == 15)
		{
			printf("DOWN");
		}
		else if (only == 0)
		{
			printf("UP");
		}
		else
		{
			printf("-1");
		}
		
	}
	else
	{
		for (int i = 0; i < days; ++i)
		{
			int aux; scanf("%d", &aux);
			size[i] = aux;
		}

		if (size[days-1] > size[days-2])
		{
			if (size[days-1] == 15)
			{
				printf("DOWN");
			}
			else
			{
				printf("UP");
			}	
		}

		else if (size[days-1] < size[days-2])
		{
			if (size[days-1] == 0)
			{
				printf("UP");
			}
			else
			{
				printf("DOWN");
			}
		}	
	}
}