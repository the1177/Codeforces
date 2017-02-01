#include <stdio.h>

int main()
{
	int numstops;
	int currentpassengers = 0;
	int maximum = 0;
	scanf("%d", &numstops);

	for (int i = 0; i < numstops; ++i)
	{
		int descend, ascend;
		scanf("%d %d", &descend, &ascend);

		currentpassengers -= descend;
		currentpassengers += ascend;

		if (currentpassengers > maximum)
		{
			maximum = currentpassengers;
		}
	}

	printf("%d", maximum );

	return 0;
}