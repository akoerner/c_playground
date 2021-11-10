#include <stdio.h>

void main(){

    int my_int_a;
    float my_float_a;
    char my_char = 'c';
    char * my_char_array = "Hello, World!";
    int my_int_b = 0;

    my_int_a = 1337;
    my_float_a = 1.2;

    printf("my_int_a: %d \n", my_int_a);
    printf("my_float_a: %f \n", my_float_a);
    printf("my_char: %c \n", my_char);
    printf("my_char_array: %s \n", my_char_array);
    printf("my_int_b: %i \n", my_int_b);
}
