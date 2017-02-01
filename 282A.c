#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int plus = 0; int minus = 0;
	int value;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		char code[4]; scanf("%s", code);
		if (code[0] == '+' || code[1] == '+' || code[2] == '+')
		{
			plus++;
		}
		else if (code[0] == '-' || code[1] == '-' || code[2] == '-')
		{
			minus++;
		}
	}

	value = plus - minus;
	printf("%d", value );

	return 0;
}

