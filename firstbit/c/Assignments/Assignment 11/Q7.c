#include <stdio.h>
#include <string.h>

void main(){
	char str1[10];
	printf("Enter the string : ");
	scanf("%s",str1);
	mystrlower(str1);
	printf("String is : %s",str1);
}
void mystrlower(char str[]){
	int i=0;
	while(str[i]!='\0'){	
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
	}
}