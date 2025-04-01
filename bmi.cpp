#include <stdio.h>
int main()
{
    float wt, h, bmi;
    printf("Enter weight in kg and height in meters: ");
    scanf("%f %f", &wt, &h);
    bmi = wt / (h * h);
        if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal weight\n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    else if (bmi >= 30)
    {
        printf("Obese\n");
    }
    
    return 0;
}
