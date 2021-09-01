#include <stdio.h>
#include <stdlib.h>
/*
typedef struct students
{
    char name[20];
    int dist;
    int speed;
}st;
*/

int main(void)
{
    float lim;
    printf("Enter speed limit allowed by university: ");
    scanf("%f", &lim);

    int n;
    printf("Enter number of students arriving university via their personal vehicles: ");
    scanf("%d", &n);

    int dist[n];
    float time[n];
    float speed[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter distance of student %d: ", i + 1);
        scanf("%d", &dist[i]);
        printf("Enter time taken by student %d to reach the university: ", i + 1);
        scanf("%f", &time[i]);

        speed[i] = dist[i] / time[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (speed[i] > lim)
            printf("\nACTION REQUIRED AGAINST STUDENT %d", i + 1);
        else
            printf("\nStudent %d following the guidelines.", i + 1);
    }

    return 0;
}
/*
#include <stdio.h>
int main()

{
    float m;
    int n, count = 0;
    printf("Enter speed limit issued by university : ");
    scanf("%f", &m);
    printf("Enter strength of class : ");
    scanf("%d", &n);
    float dist[n], t[n];
    printf("Enter %d student details...", n);
    for (int i = 0; i < n; i++)
    {
        printf("\n%d Distance(Km): ", i + 1);
        scanf("%f", &dist[i]);
        printf("Time(hour): ");
        scanf("%f", &t[i]);
    }
    for (int i = 0; i < n; i++)
        if (m >= (dist[i] / t[i]))
            count++;
        else
            count--;
    if (count == n)
        puts("All students are following the guidelines");
    else
        puts("No one is following the guidelines");
    return 0;
}
*/