#include <stdio.h>
struct Student
{
    char name[50];
    int roll_number;
    int m1, m2, m3, marks,i;
    float percentage;
};
int main()
{
    int x;
    int i = 0;
    printf("Enter the number of students: ");
    scanf("%d", &x);
    struct Student student[x];
    for(i = 0; i < x; i++)
    {
        printf("Enter name: ");
        scanf("%s", student[i].name);
        printf("Enter roll number: ");
        scanf("%d", &student[i].roll_number);
        printf("Enter marks for 3 subjects: ");
        scanf("%d %d %d", &student[i].m1, &student[i].m2, &student[i].m3);
        student[i].marks = student[i].m1 + student[i].m2 + student[i].m3;
        student[i].percentage = (float)student[i].marks / 3;
    }
    printf("\nStudent Details:\n");
    for(i = 0; i < x; i++)
    {
        printf("Name: %s\n", student[i].name);
        printf("Roll Number: %d\n", student[i].roll_number);
        printf("Total Marks: %d\n", student[i].marks);
        printf("Percentage: %.2f\n", student[i].percentage);
        printf("\n");
    }
    if (21.00 <= student[i].percentage)
    {
        printf("Pass\n");
    }
     else (0.00 <= student[i].percentage && student[i].percentage <= 20.00)
    {
        printf("Fail\n");
    }
    return 0;
}   
