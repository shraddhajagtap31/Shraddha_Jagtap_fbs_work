#include <string.h>
#include <stdio.h>
 void main(){
   char str1[20] = "FIRSTBIT";
   char str2[10];

   strcpy(str2, str1);

   printf("%s", str2);
 }