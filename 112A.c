#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int MAX = 101;
	char array1[MAX];
	char array2[MAX];

	scanf("%s", array1);
	scanf("%s", array2);

	int length = strlen(array1);

	for (int i = 0; i < length; ++i)
	{
		array1[i] = tolower(array1[i]);
		array2[i] = tolower(array2[i]);
	}

	int END = 0;

	for (int i = 0; i < length; ++i)
	{

		if (array1[i] > array2[i])
		{
			printf("1");
			END = 1;
			break;
		}
		if (array1[i] < array2[i])
		{
			printf("-1");
			END = 1;
			break;
		}
	}
	if (END == 0)
	{
		printf("0");
	}
	
	return 0;
}