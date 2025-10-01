// #include <stdio.h>

// int main() {
//     double A;
//     float n, R;
//     n = 3.14159;
//     scanf("%f", &R);
//     A = n*R*R; 
//     printf("A = %0.4f\n", A);
//     return 0;
// }


#include <stdio.h>

int main() {
    double R, A;
    const double PI = 3.14159; // Define the constant PI

    // Read the input value for R
    scanf("%lf", &R);

    // Calculate the area using the formula A = π * R^2
    A = PI * R * R;

    // Print the result with 4 decimal places
    printf("A=%.4lf\n", A);

    return 0;
}
