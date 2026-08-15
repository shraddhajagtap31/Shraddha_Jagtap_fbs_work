#include <string.h>
#include <stdio.h>
 
void main(){
	char str1[] = "warn";
    char str2[] = "war";

   printf("%d", strncmp(str1, str2, 1)); //compares limited characters
}