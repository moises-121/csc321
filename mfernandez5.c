#include <stdio.h>

int main() {
    
    int num = 42;
    float pi = 3.14f;
    char letter = 'A';
    double large_pi = 3.141592653589793;

   
    printf("Address of num: %p, Value: %d\n", (void*)&num, num);
    printf("Address of pi: %p, Value: %f\n", (void*)&pi, pi);
    printf("Address of letter: %p, Value: %c\n", (void*)&letter, letter);
    printf("Address of large_pi: %p, Value: %lf\n", (void*)&large_pi, large_pi);

    
    if (num > 0) {
        int scoped_var = 100;
        printf("Inside if: scoped_var = %d\n", scoped_var);
    }
    // Uncommenting the next line would cause an error because scoped_var is out of scope
    //printf("Outside if: scoped_var = %d\n", scoped_var);

   
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    
    for (int i = 0; i < 10; i++) {
        printf("Address of array[%d]: %p, Value: %d\n", i, (void*)&array[i], array[i]);
    }

    return 0;
}
