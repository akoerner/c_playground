#include <stdio.h>

void hello_world(){
    printf("Hello, World!\n");
}

int my_int(){
    return 32;
}

float my_float(){
    return 6.6;
}

int main(){

hello_world();

printf("my_int: %d my_float:%f \n", my_int(), my_float());
printf("my_int + 33: %d", my_int() + 33);


}
