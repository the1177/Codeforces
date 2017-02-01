#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char word[101];
	scanf("%s", word);
	int length = strlen(word);
	int finish = 0; int alarm = 0;

	if (length == 1)
	{
		if (word[0] >= 'a' && word[0] <= 'z')
		{
			char letter = toupper(word[0]);
			printf("%c", letter );
		}
		else if (word[0] >= 'A' && word[0] <= 'Z')
		{
			char letter = tolower(word[0]);
			printf("%c", letter );
		}
		else
		{
			char letter = word[0];
			printf("%c", letter );
		}
		finish = 1;
	}

	if ( (word[0] >= 'A' && word[0] <= 'Z') && (word[1] >= 'A' && word[1] <= 'Z') )
	{
		char print[100];

		for (int i = 0; i < length; ++i)
		{
			char current = tolower(word[i]);

			char watcher = word[i];
			if (watcher >= 'a' && watcher <= 'z')
			{
				alarm = 1;
			}

			print[i] = current;
		}

		if (alarm == 0)
			{
				for (int i = 0; i < length; ++i)
				{
					printf("%c", print[i] ); finish = 1;
				}
			}
	}

	if ( ((word[0] >= 'a' && word[0] <= 'z') || (word[0] >= 'A' && word[0] <= 'Z')) && (word[1] >= 'A' && word[1] <= 'Z') && finish == 0)
	{
		char print[100];
		char first = (toupper(word[0]) );
		print[0] = first;
		
		for (int i = 1; i < length; ++i)
		{
			char current = (tolower(word[i]) );

			char watcher = word[i];
			if (watcher >= 'a' && watcher <= 'z')
			{
				alarm = 1;
			}

			print[i] = current;
		}

		if (alarm == 0)
		{
			for (int i = 0; i < length; ++i)
			{
				printf("%c", print[i] ); finish = 1;
			}
		}
	}

	if (finish == 0 || alarm == 1)
	{
		for (int i = 0; i < length; ++i)
		{
			char current = word[i];
			printf("%c", current );
		}
	}

	return 0;
}