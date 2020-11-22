#include "holberton.h"

int main(void)
{
	char *user_input;
	size_t buffersize = 256;
	char *clean_input;

	launchPrompt();

	user_input = malloc(sizeof(char) * buffersize);
	if (user_input == NULL)
	{
		free(user_input);
		return (-1);
	}

	if (getline(&user_input, &buffersize, stdin) == EOF)
	{
		free(user_input);
		EOF;
		return (0);
	}

	clean_input = _strremovechar(user_input, '\n');

	printf("%s sin new-line\n", clean_input);
	return (0);
}
