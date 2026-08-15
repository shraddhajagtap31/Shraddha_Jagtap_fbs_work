#include <stdio.h>

void evenodd(int *);
void primecheck(int *);
void palindrome(int *);
void positive_negative(int *);
void reverse(int *);
void sumdigits(int*);

void main()
{
    int n, choice;
    printf("Enter number: ");
    scanf("%d", &n);
    while(1){
    printf("\n1. Check Even or Odd");
    printf("\n2. Check Prime or Not");
    printf("\n3. Check Palindrome or Not");
    printf("\n4. Check Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of the digits");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        evenodd(&n);
    }
    else if(choice == 2)
    {
        primecheck(&n);
    }
    else if(choice == 3)
    {
        palindrome(&n);
    }
    else if(choice == 4)
    {
        positive_negative(&n);
    }
    else if(choice == 5)
    {
        reverse(&n);
    }
    else if(choice == 6){
    	sumdigits(&n);
	}
    else
    {
        printf("Invalid choice");
    }
}
}

void evenodd(int *n)
{
    if(*n % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}

void primecheck(int *n)
{
    int i, count = 0;

    for(i = 1; i <= *n; i++)
    {
        if(*n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
}

void palindrome(int *n)
{
    int temp, rem, rev = 0;

    temp = *n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == *n)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
}

void positive_negative(int *n)
{
    if(*n > 0)
    {
        printf("Positive number");
    }
    else if(*n < 0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }
}
void reverse(int *n)
{
    int temp, rem, rev = 0;
    temp = *n;
    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
     printf("Reverse = %d", rev);
}
void sumdigits(int *n)
{
    int temp, rem, sum = 0;
    temp = *n;
    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    printf("Sum of digits = %d", sum);
}
