#include<stdio.h>
#include<stdlib.h>

struct employe {
    char name[100]; // Allocate a fixed size for the name
    int age;
    int salary;
} emp1;

int main() {
    printf("Enter the employee name: ");
    scanf("%99s", emp1.name); // Limit input size to avoid overflow

    printf("Enter the employee age: ");
    scanf("%d", &emp1.age);

    printf("Enter the employee salary: ");
    scanf("%d", &emp1.salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp1.name);
    printf("Age: %d\n", emp1.age);
    printf("Salary: %d\n", emp1.salary);

    return 0;
}
