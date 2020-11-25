#include "holberton.h"

#define BUFSIZE 64
#define DELIMITER " \t\r\n\a"

char **split(char *input)
{
	int bufsize = BUFSIZE;
	int idx;
	char **tokens;
	char *token;

	tokens = malloc(sizeof(char *) * bufsize);
	if (tokens == NULL)
	{
		free(tokens);
		return (0);
	}

	token = strtok(input, DELIMITER);

	for (idx = 0; token != NULL; idx++)
	{
		tokens[idx] = token;

		if (idx >= bufsize)
		{
			bufsize += BUFSIZE;
			tokens = realloc(tokens, sizeof(char *) * bufsize);
			if (tokens == NULL)
			{
				free(tokens);
				return (0);
			}
		}
		token = strtok(NULL, DELIMITER);
	}
	tokens[idx] = '\0';

	return (tokens);
}
