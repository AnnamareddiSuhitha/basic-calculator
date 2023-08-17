#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}

float sine(float a) {
    float radians = a * 3.14159265 / 180;
    float result = radians;
    float term = radians;
 int i;

    for (i = 3; i< 15; i += 2) {
        term = -term * radians * radians / (i * (i - 1));
        result += term;
    }

    return result;
}

float cosine(float a) {
    float radians = a * 3.14159265 / 180;
    float result = 1;
    float term = 1;
    int i;

    for (i = 2;i<15 ; i += 2) {
        term = -term * radians * radians / (i * (i - 1));
        result += term;
    }

    return result;
}

float tangent(float a) {
    return sine(a) / cosine(a);
}

int main() {
char choice;
    float x,y, angle;

    while (1) {
        printf("Options:\n");
        printf("Enter 'a' for addition\n");
        printf("Enter 's' for subtraction\n");
        printf("Enter 'm' for multiplication\n");
        printf("Enter 'd' for division\n");
        printf("Enter 'y' for sine function\n");
        printf("Enter 'c' for cosine function\n");
        printf("Enter 't' for tangent function\n");
        printf("Enter 'q' to quit\n");

        scanf(" %c", &choice);

        if (choice == 'q') {
            break;
        } else if (choice == 'a' || choice == 's' || choice == 'm' || choice == 'd') {
            printf("Enter first number: ");
            scanf("%f", &x);
            printf("Enter second number: ");
            scanf("%f", &y);
            if (choice == 'a') {
                printf("Result: %f\n", add(x,y));
            } else if (choice == 's') {
                printf("Result: %f\n", subtract(x,y));
            } else if (choice == 'm') {
                printf("Result: %f\n", multiply(x,y));
            } else if (choice == 'd') {
                printf("Result: %f\n", divide(x,y));
            }
        } else if (choice == 'y' || choice == 'c' || choice == 't') {
            printf("Enter angle in degrees: ");
            scanf("%f", &angle);
            if (choice == 'y') {
 printf("Result: %f\n", sine(angle));
            } else if (choice == 'co') {
                printf("Result: %f\n", cosine(angle));
            } else if (choice == 't') {
                printf("Result: %f\n", tangent(angle));
            }
        } else {
            printf("Invalid input\n");
        }
    }
return 0;
}