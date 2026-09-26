#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};
void main()
{
    struct Movie m[10];
    int count = 0;
    int choice;
    do
    {
        printf("\n\n--- Menu");
        printf("\n1. Add Movie");
        printf("\n2. Display Movies");
        printf("\n3. Search Movie");
        printf("\n4. Update Movie");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addMovie(m, &count);
                break;

            case 2:
                displayMovies(m, count);
                break;

            case 3:
                searchMovie(m, count);
                break;

            case 4:
                updateMovie(m, count);
                break;

            case 5:
                printf("\nExit");
                break;

            default:
                printf("\nInvalid choice");
        }

    } while(choice != 5);
}
void addMovie(struct Movie m[], int *count)
{
    printf("\nEnter movie title: ");
    scanf("%s", m[*count].title);
    printf("Enter director: ");
    scanf("%s", m[*count].director);
    printf("Enter release year: ");
    scanf("%d", &m[*count].year);
    printf("Enter genre: ");
    scanf("%s", m[*count].genre);
    (*count)++;
}

void displayMovies(struct Movie m[], int count)
{
    int i;
    for(i = 0; i < count; i++)
    {
        printf("\nMovie %d", i + 1);
        printf("\nTitle = %s", m[i].title);
        printf("\nDirector = %s", m[i].director);
        printf("\nYear = %d", m[i].year);
        printf("\nGenre = %s\n", m[i].genre);
    }
}

void searchMovie(struct Movie m[], int count)
{
    char title[50];
    int i, found = 0;
    printf("\nEnter movie title to search: ");
    scanf("%s", title);
    for(i = 0; i < count; i++)
    {
        if(strcmp(m[i].title, title) == 0)
        {
            printf("\nMovie Found!");
            printf("\nTitle = %s", m[i].title);
            printf("\nDirector = %s", m[i].director);
            printf("\nYear = %d", m[i].year);
            printf("\nGenre = %s\n", m[i].genre);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nMovie not found");
    }
}

void updateMovie(struct Movie m[], int count)
{
    char title[50];
    int i;
    printf("\nEnter movie title to update: ");
    scanf("%s", title);
    for(i = 0; i < count; i++)
    {
        if(strcmp(m[i].title, title) == 0)
        {
            printf("Enter new director: ");
            scanf("%s", m[i].director);

            printf("Enter new year: ");
            scanf("%d", &m[i].year);

            printf("Enter new genre: ");
            scanf("%s", m[i].genre);

            printf("\nMovie updated successfully!");
            return;
        }
    }
    printf("\nMovie not found");
}
