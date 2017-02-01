#include <stdio.h>

int main()
{	
	int array[25] = {4, 3, 2, 3, 4, 3, 2, 1, 2, 3, 2, 1, 0, 1, 2, 3, 2, 1, 2, 3, 4, 3, 2, 3, 4};
	
	for (int i = 0; i < 25; ++i)
	{
		int current; scanf("%d", &current);
		if (current == 1)
		{
			printf("%d", array[i] );
			return 0;
		}
	}
}