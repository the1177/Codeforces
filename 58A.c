#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int MAX = 101;
	int current = 0, YES = 0;
	char hello[6] = {'h', 'e', 'l', 'l', 'o'};
	char array[MAX];
	scanf("%s", array);
	int length = strlen(array);

	for (int i = 0; i < length; ++i)
	{
		if (current == 5)
		{
			printf("YES");
			YES = 1;
			break;
		}

		if (array[i] == hello[current])
		{
			current ++;
		}

		if (current == 5)
		{
			printf("YES");
			YES = 1;
			break;
		}
	}

	if (YES == 0)
	{
		printf("NO");
	}

	return 0;
}