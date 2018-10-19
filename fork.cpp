#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]){

  if(argc != 2)
{
    printf("Usage: sod [number] \n");  /* -o sod when compiled */
   
  } exit(1); 

  pid_t childpid = 0; 
  int sum = 0;   

  int i; 
  for(i = 0; i < strlen(argv[1]); i++){
    /* atoi needs a string */
    char str[2]; 
    str[0] = argv[1][i]; str[1] = 0;  
    sum += atoi(str);   
    if(childpid = fork()) 
      break;  
  }

  wait(NULL); 
  printf("sum: %d\n", sum);
  exit(0); /* probably redundant... */
  return 0; 
}
