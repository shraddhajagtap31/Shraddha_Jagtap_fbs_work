#include <string.h>
#include <stdio.h>
 
void main(){
	char str[] = "I love programming";
	//basically used to fid the substring
    printf("%s", strstr(str, "programming"));
}