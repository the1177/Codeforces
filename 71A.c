#include <stdio.h>
#include <string.h>

int main()
{
	int loops;
	scanf("%d", &loops);
	for (int i = 0; i < loops; ++i)
	{
		int MAX = 100;
		char array[MAX];
		scanf("%s", array);
		int length = strlen(array);

		if (length > 10)
		{
			printf("%c", array[0]);
			int between = length - 2;
			printf("%d", between);
			printf("%c\n", array[length-1]);
		}
		else
		{
			for (int i = 0; i < length; ++i)
			{
				printf("%c", array[i]);
			}
			printf("\n");
		}
	}

	return 0;
}