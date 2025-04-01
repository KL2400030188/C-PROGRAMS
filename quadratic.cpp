#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, d, r1, r2, rp, ip;
    printf("Enter a, b, c values: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - (4 * a * c);
    
    if (d > 0) {
        printf("\nRoots are real and distinct");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\nRoot1 = %f, Root2 = %f", r1, r2);
    } 
    else if (d == 0) {
        printf("\nRoots are real and equal");
        r1 = r2 = -b / (2 * a);
        printf("\nRoot = %f", r1);
    } 
    else {
        printf("\nRoots are imaginary");
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("\n%.2f + i%.2f", rp, ip);
        printf("\n%.2f - i%.2f", rp, ip);
    }
    
    return 0;
}
