#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <fcntl.h> 

#define INPUT_STRING_SIZE 80

#include "io.h"
#include "parse.h"
#include "process.h"
#include "shell.h"
/**
 * Executes the process p.
 * If the shell is in interactive mode and the process is a foreground process,
 * then p should take control of the terminal.
 */
void launch_process(process *p)
{
  if(execvp(*p->argv,p->argv) < 0){
    perror(*p->argv);
    exit(1);
   }
    /* int i;
     tok_t *t;
     t = getToks(p->argv);
         for(i=0;i<MAXTOKS && t[i];i++){
		 if (strcmp( t[i], ">") == 0){
	 	  t[i]=NULL;
		  //printf("hello");
		  part4(t,t[i+1],">");	
                  }
		if (strcmp( t[i], "<") == 0){
	 	  t[i]=NULL;
		  //printf("hello");
		  part4(t,t[i+1],"<");	
                  }
		}
      part3(t);
      part2(t);*/
}

/* Put a process in the foreground. This function assumes that the shell
 * is in interactive mode. If the cont argument is true, send the process
 * group a SIGCONT signal to wake it up.
 */
void put_process_in_foreground (process *p, int cont)
{
  /** YOUR CODE HERE */
}

/* Put a process in the background. If the cont argument is true, send
 * the process group a SIGCONT signal to wake it up. */
void
put_process_in_background (process *p, int cont)
{
  /** YOUR CODE HERE */
}
