#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3] = {
        {1, "Arun", 83.5},
        {2, "Rohit", 91.0},
        {3, "Prem", 87.5}
    };

    int i;

   printf("my name is raja dubey");

    for(i = 0; i < 3; i++)
    {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}