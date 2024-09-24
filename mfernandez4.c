//MOises Fernandez

#include <stdio.h>

int main() {
    // Declare variables of different data types
    int x;
    float f;
    char c;
    double d;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &c); // The space before %c is important to consume newline

    printf("Enter a double: ");
    scanf("%lf", &d);

    // Conditional checks and output
    if (x > 1) {
        printf("The integer variable is greater than 1.\n");
    } else {
        printf("The integer variable is not greater than 1.\n");
    }

    if (f == 3.14) {
        printf("The float variable is equal to 3.14.\n");
    } else {
        printf("The float variable is not equal to 3.14.\n");
    }

    if (c != 'a') {
        printf("The character variable does not equal the letter 'a'.\n");
    } else {
        printf("The character variable equals the letter 'a'.\n");
    }

    if (d < 10.5) {
        printf("The double variable is less than 10.5.\n");
    } else {
        printf("The double variable is not less than 10.5.\n");
    }

    return 0;
}
