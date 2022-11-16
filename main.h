#ifndef MAIN_H
#define MAIN_H
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

extern char **environ;

char *show_input(void);
void prompt(void);
char *_strcat(char *src);
int _strlen(char *str);
void place(char *str);
char *findfile(char *command);
char *find_command(char *command);
int compare(char *s1, char *s2);
int _strcmpdir(char *s1, char *s2);
int charput(char c);
void place(char *str);
char *str_concat(char *s1, char *s2);
int lookforslash(char *cmd);
int compareExit(char *s1, char *s2);
int compareEnv(char *s1, char *s2);
void execute_proc(char **cmd);
char **identify_string(char *parameter);
void controlC(int sig);

int prompt(void);
char *_read(void);
char *_fullpathbuffer(char **av, char *PATH, char *copy);
int checkbuiltins(char **av, char *buffer, int exitstatus);
int _forkprocess(char **av, char *buffer, char *fullpathbuffer);

char *_strdup(char *str);
int _splitstring(char *str);
int _strcmp(const char *s1, const char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);

char **tokenize(char *buffer);
int _splitPATH(char *str);
int _PATHstrcmp(const char *s1, const char *s2);
char *_concat(char *tmp, char **av, char *tok);

char *_getenv(const char *name);
int _env(void);
void _puts(char *str);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

#endif
