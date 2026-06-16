#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
