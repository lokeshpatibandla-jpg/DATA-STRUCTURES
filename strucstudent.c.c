#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student s[2];
    float avg;

    for (int i = 0; i < 2; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Total Marks: ");
        scanf("%f", &s[i].totalMarks);
    }

    printf("\n--- Student Information ---\n");
    avg = (s[0].totalMarks + s[1].totalMarks) / 2;

    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nTotal Marks: %.2f\n", s[i].totalMarks);
    }

    printf("\nAverage of Total Marks = %.2f\n", avg);

    return 0;
}
