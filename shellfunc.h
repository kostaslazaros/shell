/**********************************************************
*           Shell and client server programs              *
*   Made by: Konstantinos Lazaros - Nefeli Stefanatou     *
*	           Lesson: Advanced Programming               *
*	           D.I.B, University of Thessaly              *
**********************************************************/


#ifndef SHELL_FUNCTIONS_1
#define SHELL_FUNCTIONS_1

static char line[1024];
static char* args[512];


#define READ  0
#define WRITE 1

int command(int input, int first, int last);
void cleanup(int n);
int runshell(char* argv);
int run_children(char* cmd);
int run(char* cmd, int input, int first, int last);
void split(char* cmd);
char* skipwhite(char* s);

#endif
