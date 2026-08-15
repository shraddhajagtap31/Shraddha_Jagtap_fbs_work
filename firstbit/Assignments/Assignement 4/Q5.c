#include <stdio.h>

void main()
{
    int choice, number, i, count, rem, reverse, sum, original;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(number % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;
        case 2:
            count = 0;
            for(i = 1; i <= number; i++)
            {
                if(number % i == 0)
                {
                    count++;
                }
            }
            if(count == 2)
                printf("Prime");
            else
                printf("Not Prime");

            break;
        case 3:
            original = number;
            reverse = 0;
            for(; number > 0; number = number / 10)
            {
                rem = number % 10;
                reverse = reverse * 10 + rem;
            }
            if(reverse == original)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;
        case 4:
            if(number > 0)
                printf("Positive");
            else if(number < 0)
                printf("Negative");
            else
                printf("Zero");

            break;
        case 5:
            reverse = 0;
            for(; number > 0; number = number / 10)
            {
                rem = number % 10;
                reverse = reverse * 10 + rem;
            }
            printf("Reverse = %d", reverse);
            break;
        case 6:
            sum = 0;
            for(; number > 0; number = number / 10)
            {
                rem = number % 10;
                sum = sum + rem;
            }
            printf("Sum = %d", sum);
            break;
        default:
            printf("Invalid choice");
    }
}