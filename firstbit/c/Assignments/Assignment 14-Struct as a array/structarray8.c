#include <stdio.h>

typedef struct Distance {
    int feet;
    int inch;
} Distance;

void main() {

    Distance arr[3];
    for(int i = 0; i < 3; i++) {

        printf("\nEnter Distance %d:\n", i + 1);
        printf("Enter Feet: ");
        scanf("%d", &arr[i].feet);
        printf("Enter Inch: ");
        scanf("%d", &arr[i].inch);
    }

    printf("\n--------- Distance Details ---------\n");

    for(int i = 0; i < 3; i++) {

        printf("Distance: %d feet %d inch\n",arr[i].feet,arr[i].inch);
    }
}