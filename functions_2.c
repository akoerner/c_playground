#include <stdio.h>

int a(int my_num){
    return 5 + my_num;
}

int b(){
    return 32;
}

int c(int my_num){
    return a(22 + my_num + b());
}

int main(){
    printf("c(): %d", c(12));

    return 0;
}
