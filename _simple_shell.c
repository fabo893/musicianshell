#include "holberton.h"

int main(int argc, char **argv[], char **env[])
{
	char *user_input;
	size_t buffersize = 256;
	char *clean_input;
	int status;
	pid_t pid;


        pid = getpid();

	while (1)
	{
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
			break;
		}
		else
		{
			clean_input = _strremovechar(user_input, '\n');

			makeFork(clean_input);
		}
		wait(&status);
		return (0);
	}
       	return (0);
}
