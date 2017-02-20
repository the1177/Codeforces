#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main()
{
	char a[MAX]; char b[MAX];
	scanf("%s", &a); scanf("%s", &b);
	int lenA, lenB; 
	lenA = strlen(a); lenB = strlen(b);
	if (strcmp(a,b) != 0)
	{
		if (lenA > lenB)
		{
			printf("%d", lenA );
			return 0;
		}
		else
		{
			printf("%d", lenB );
			return 0;
		}
	}
	printf("-1");
	return 0;
}