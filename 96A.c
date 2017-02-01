#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int A = 0, B = 0;
	int YES = 0;
	int MAX = 101;
	char array[MAX];
	scanf("%s", array);
	int length = strlen(array);

	if (array [0] == '0')
	{
		A = 1;
	}
	else
	{
		B = 1;
	}

	for (int i = 1; i < length; ++i)
	{
		if (A == 7 || B == 7)
		{
			printf("YES");
			YES = 1;
			break;
		}
		if (array[i] == array[i-1])
		{
			if (array[i] == '0')
			{
				A = A + 1;
				B = 0;
			}
			else if (array[i] == '1')
			{
				B = B + 1;
				A = 0;
			}
		}
		else if (array[i] != array[i-1])
		{
			if (array[i] == '0')
			{
				A = 1;
				B = 0;
			}
			else
			{
				B = 1;
				A = 0;
			}
		}
		if (A == 7 || B == 7)
		{
			printf("YES");
			YES = 1;
			break;
		}
		//printf("ROUND #%d \n A = %d \nB = %d\n \n", i, A, B);
	}

	if (YES == 0)
	{
		printf("NO");
	}
	
	return 0;
}