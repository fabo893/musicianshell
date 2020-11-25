#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

void launchPrompt(void);
char *rdcmd(void);
char **split(char *input);
int exeprg(char **tokens);
int _sexit();
char *str_builtins[1];
int (*fun_builtins[1]) (char **);
int num_builtins();
int makeFork(char **tokens);


/*
char *_strremovechar(char *str, char ch);
int _strlen(char *str);
void makeFork(char *str);
*/
/*
void catch_c_c(int sig);
void catch_c_d(int sig);
*/


/* TEST */
/*
void lsh_loop(void);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
int lsh_launch(char **args);
int lsh_execute(char **args);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

char *builtin_str[1];

int (*builtin_func[1]) (char **);
*/
#endif /* HOLBERTON_H */
