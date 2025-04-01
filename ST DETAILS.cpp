#include <stdio.h>

int main()
{
    char name[25];
    long long int idno;
    char gender;
    char branch[5];
    long long int phno;
    float cgpa;
    printf("Enter gender (M/F): ");
    scanf("%c", &gender);
    
	printf("Enter name: ");
    scanf("%s", name); 

    printf("Enter idno: ");
    scanf("%lld", &idno);

    printf("Enter branch: ");
    scanf("%s", branch); 

    printf("Enter phno: ");
    scanf("%lld", &phno);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    printf("Gender: %c\n", gender);
    printf("Name: %s\n", name);
    printf("ID No: %lld\n", idno);
    printf("Branch: %s\n", branch);
    printf("Phone No: %lld\n", phno);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}