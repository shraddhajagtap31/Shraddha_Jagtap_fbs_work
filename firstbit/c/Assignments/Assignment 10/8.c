#include <string.h>
#include <stdio.h>
 
void main(){
	char str[] = "The world is going to end";

    printf("%s", strrchr(str, 'g')); //find last occurence of the charater
}