#include <string.h>
#include <stdio.h>
 
void main(){
   char str1[30] = "The";
   char str2[] = "World";
   strncat(str1, str2, 3);  //joins limited characters
    printf("%s", str1);
}