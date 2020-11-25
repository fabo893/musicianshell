#include "holberton.h"
#include <signal.h>

/**
 * main - CLI and start program
 * 
 * Return: status
 */

int main(void)
{
	char *user_input;
	size_t buffersize = 256;
	char *clean_input;
	int status;
	signal(SIGINT, catch_c_c);

	while(1)
	{

	launchPrompt();

	user_input = malloc(sizeof(char) * buffersize);
	if (user_input == NULL)
	{
		free(user_input);
		return (0);
	}

	if (getline(&user_input, &buffersize, stdin) == EOF)
	{
		free(user_input);
		EOF;
		return (-1);

	}
	else

	{
	clean_input = _strremovechar(user_input, '\n');
	wait(&status);
	}
	{
	makefork(clean_input);
	}
/*	wait(&status);*/
	sleep(0);
	}
	exit (1);
}
