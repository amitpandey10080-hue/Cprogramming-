#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float average;
};

int main() {
    struct Student s[100];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        s[i].total = 0;
        for(j = 0; j < 3; j++) {
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].average = s[i].total / 3;
    }

    printf("\n\n--- Student Marks Record ---\n");
    printf("Roll\tName\t\tTotal\tAverage\n");
    printf("-----------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-10s\t%.2f\t%.2f\n", s[i].roll, s[i].name, s[i].total, s[i].average);
    }

    return 0;
}