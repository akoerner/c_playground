#include <stdio.h>
int main() {

    int A = 22;
    int B = 12;
    int C = -7;
    int D = 22;
    int E = (A + B) * D;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    if(B > A){
      printf("Fizz\n");    
    }else if(C < 0){
      printf("Buzz\n");    
    }else{
      printf("Fizz Buzz\n");    
    }
    return 0;
}
