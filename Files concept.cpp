#include<stdio.h>
int main() 
{
    FILE *fptr;
    long long int rollno;
    char name[20];
    float cgpa;
    fptr = fopen("stud.txt", "w");
    printf("\nEnter roll no: ");
    scanf("%lld", &rollno);
    printf("\nEnter name: ");
    scanf("%s", name);  
    printf("\nEnter CGPA: ");
    scanf("%f", &cgpa);
    fprintf(fptr, "\n%lld\n%s\n%.2f\n", rollno, name, cgpa);
    fclose(fptr);
    return 0;
}
