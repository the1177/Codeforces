#include <stdio.h>
#include <string.h>

int main()
{	
	int current = 20000;
	int turns;
	int MAX = 10;
	int legal = 0;

	scanf("%d", &turns);

	for (int i = 0; i < turns; ++i)
	{
		int km = 0; char dir[MAX];
		scanf("%d %s", &km, dir);

		if (current <= 20000 || current >= 40000)
		{
			if (current == 20000)
			{
				if (dir[0] != 'S')
				{
					legal++;
				}
			}
			if (current == 40000)
			{
				if (dir[0] != 'N')
				{
					legal++;
				}
			}
		}

		if (dir[0] == 'S')
		{
			current = current + km;
		}
		if (dir[0] == 'N')
		{
			current = current - km;
		}

		if (current < 20000 || current > 40000)
		{
			legal++;
		}
		//printf("%d %s", km, dir );
	}
	if (current != 20000)
	{
		legal++;
	}


	if (legal == 0)
	{
		printf("YES");
	}
	if (legal != 0)
	{
		printf("NO");
	}

	return 0;
}