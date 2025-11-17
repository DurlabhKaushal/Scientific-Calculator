#include<stdio.h>
#include<math.h>

double PI = 3.1415;



int main() {
    
    int choice;
    double a, b = 0, result;
    char op;

    do {
        printf("\n--------Scientific Calculator--------\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Sine (in degrees)\n");
        printf("6. Cosine (in degrees)\n");
        printf("7. Tangent (in degrees)\n");
        printf("8. Square Root\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);

            if (choice == 1) {
                result = a + b;
                op = '+';
            } else if (choice == 2) {
                result = a - b;
                op = '-';
            } else if (choice == 3) {
                result = a * b;
                op = '*';
            } else if (choice == 4) {
                if (b == 0) {
                    printf("Error: Cannot divide by zero!\n");
                    continue;
                }
                result = a / b;
                op = '/';
            }
            printf("Result: %.2lf %c %.2lf = %.2lf\n", a, op, b, result);
          
        } else if (choice >= 5 && choice <= 8) {
            printf("Enter a number: ");
            scanf("%lf", &a);

            double radians = a * (PI / 180.0); 

            if (choice == 5) {
                result = sin(radians);
                op = 's';
                printf("Result: sin(%.2lf°) = %.2lf\n", a, result);
            } else if (choice == 6) {
                result = cos(radians);
                op = 'c';
                printf("Result: cos(%.2lf°) = %.2lf\n", a, result);
            } else if (choice == 7) {
                result = tan(radians);
                op = 't';
                printf("Result: tan(%.2lf°) = %.2lf\n", a, result);
            } else if (choice == 8) {
                if (a < 0) {
                    printf("Error: Cannot take square root of a negative number!\n");
                    continue;
                }
                result = sqrt(a);
                op = 'q';
                printf("Result: sqrt(%.2lf) = %.2lf\n", a, result);
            }



        }

    } while (choice != 9);


    return 0;
}