#include "holberton.h"

<<<<<<< HEAD
int main(int argc, char **argv[], char **env[])
=======
/**
 * main - CLI and start program
 * 
 * Return: status
 */

int main(void)
>>>>>>> 2088da3d899d8e3e0959a8af6a509dc0ac4c2596
{
	char *user_input;
	size_t buffersize = 256;
	char *clean_input;
	int status;
<<<<<<< HEAD
	pid_t pid;
=======

	while(1)
	{
>>>>>>> 2088da3d899d8e3e0959a8af6a509dc0ac4c2596


        pid = getpid();

	while (1)
	{
<<<<<<< HEAD
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
=======
		free(user_input);
		EOF;
		return (0);

	}
	else

	{
	clean_input = _strremovechar(user_input, '\n');

	makefork(clean_input);
	}
	
	wait(&status);

	}
	return (0);
>>>>>>> 2088da3d899d8e3e0959a8af6a509dc0ac4c2596
}
