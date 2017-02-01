#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int MAX = 10000;
	char array[MAX];
	scanf("%s", array);
	int length = strlen(array);

	if (array[0] >= 'a' && array[0] <= 'z')
	{
		char letter = toupper(array[0]) ;
		array[0] = letter;
	}
	for (int i = 0; i < length; ++i)
	{
		printf("%c", array[i] );
	}
}