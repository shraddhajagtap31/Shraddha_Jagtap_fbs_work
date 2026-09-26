#include <stdio.h>

struct Player
{
    char name[30];
    int matches;
    int runs;
    int wickets;
};

void main()
{
    struct Player p[10];
    acceptPlayers(p);
    displayPlayers(p);
    maxRuns(p);
    maxWickets(p);
}
void acceptPlayers(struct Player p[])
{
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", p[i].name);
        printf("Enter matches: ");
        scanf("%d", &p[i].matches);
        printf("Enter runs: ");
        scanf("%d", &p[i].runs);
        printf("Enter wickets: ");
        scanf("%d", &p[i].wickets);
    }
}
void displayPlayers(struct Player p[])
{
    int i;
    printf("\nPlayer Information \n");
    for(i = 0; i < 10; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name = %s\n", p[i].name);
        printf("Matches = %d\n", p[i].matches);
        printf("Runs = %d\n", p[i].runs);
        printf("Wickets = %d\n", p[i].wickets);
    }
}
void maxRuns(struct Player p[])
{
    int i, max = 0;
    for(i = 1; i < 10; i++)
    {
        if(p[i].runs > p[max].runs)
        {
            max = i;
        }
    }
    printf("\nPlayer with Maximum Runs:\n");
    printf("Name = %s\n", p[max].name);
    printf("Runs = %d\n", p[max].runs);
}
void maxWickets(struct Player p[])
{
    int i, max = 0;
    for(i = 1; i < 10; i++)
    {
        if(p[i].wickets > p[max].wickets)
        {
            max = i;
        }
    }
    printf("\nPlayer with Maximum Wickets:\n");
    printf("Name = %s\n", p[max].name);
    printf("Wickets = %d\n", p[max].wickets);
}

