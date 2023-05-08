#include <stdlib.h>
#include <stdio.h>
/* The variable environ points to an array of pointers to strings
       called the "environment".  The last pointer in this array has the
       value NULL.  This array of strings is made available to the
       process by the execve(2) call when a new program is started.
       When a child process is created via fork(2), it inherits a copy
       of its parent's environment.*/
extern char **environ;
int main()
{
char **env = environ;
while(*env) {
printf("%s\n",*env);
env++;
}
exit(0);
}