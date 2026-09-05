#include <stdio.h>

void menu(int n, int choice);

void main()
{
    int n, choice;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    menu(n, choice);
}

void menu(int n, int choice)
{
    int i, flag, temp, rem, rev, sum;

    if(choice == 1)
    {
        if(n % 2 == 0)
            printf("Even");
        else
            printf("Odd");
    }
    else if(choice == 2)
    {
        flag = 1;

        if(n < 2)
            flag = 0;

        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("Prime");
        else
            printf("Not Prime");
    }
    else if(choice == 3)
    {
        temp = n;
        rev = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if(rev == n)
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }
    else if(choice == 4)
    {
        if(n > 0)
            printf("Positive");
        else if(n < 0)
            printf("Negative");
        else
            printf("Zero");
    }
    else if(choice == 5)
    {
        temp = n;
        rev = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        printf("Reverse = %d", rev);
    }
    else if(choice == 6)
    {
        temp = n;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }

        printf("Sum = %d", sum);
    }
    else
    {
        printf("Invalid choice");
    }
}