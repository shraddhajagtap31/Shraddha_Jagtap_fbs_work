#include <stdio.h>
#include <string.h>

void main()
{
    int errorNumber;
    printf("Enter error number: ");
    scanf("%d", &errorNumber);
    printf("Error message = %s", strerror(errorNumber));   //for displaying the error msg

}