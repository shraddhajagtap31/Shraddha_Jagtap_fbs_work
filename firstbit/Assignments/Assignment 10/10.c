#include <string.h>
#include <stdio.h>
 
void main(){
       char str[] = "Hello World C";
	   char *token;
	   token = strtok(str, " ");
	   while(token != NULL)
       {
          printf("%s\n", token);
          token = strtok(NULL, " ");
      }
  }