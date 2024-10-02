#include <stdio.h>
#include <math.h>  // for sqrt() function

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients a, b, and c from the user
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of the discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        // One real and equal root
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf and %.2lf\n", root1, root2);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary: %.2lf + %.2lfi and %.2lf - %.2lfi\n", 
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
