#include <stdio.h>

void main(){
    int n,number, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == number)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
}
