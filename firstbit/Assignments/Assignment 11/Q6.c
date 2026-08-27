#include <stdio.h>
#include <string.h>

void main(){
	char str1[10];
	printf("Enter the string : ");
	scanf("%s",str1);
	mystrupper(str1);
	printf("String is : %s",str1);
}
void mystrupper(char str[]){
	int i=0;
	while(str[i]!='\0'){	
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
	}
}