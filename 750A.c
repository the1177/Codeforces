#include <stdio.h>

int main()
{
	int problems; int party;
	int solved = 0; int tictoc = 240; int current = 5; int time = 240;

	scanf("%d %d", &problems, &party);

	if (party >= 236)
	{
		printf("0");
	}
	else
	{
		while (tictoc > 0)
		{
			//printf("------------------\n");
			//printf("Solucionados = %d || Restante = %d || Current = %d\n", solved, tictoc, current);
			if (solved == problems)
			{
				break;
			}
			else if ( (tictoc - current) >= party)
			{
				tictoc = tictoc - current;
				current += 5; solved ++;
			}
			else if ( (tictoc - current) <= party)
			{
				break;
			}
		}
		printf("%d", solved );
	}
}