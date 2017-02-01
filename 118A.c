#include <stdio.h>
#include <string.h>

int main()
{
	int MAX = 100;
	char array[MAX];
	scanf("%s", array);
	int length = strlen(array);

	for (int i = 0; i < length; ++i)
	{
		if (array[i] == 'A' || array[i] == 'O' || array[i] == 'Y' || array[i] == 'E' || array[i] == 'U' || array[i] == 'I' || array[i] == 'a' || array[i] == 'o'|| array[i] == 'y' || array[i] == 'e' || array[i] == 'u' || array[i] == 'i')
		{
			
		}
		else
		{
			char letter = tolower(array[i]);
			printf(".");
			printf("%c", letter);
		}
	}
	return 0;
}
