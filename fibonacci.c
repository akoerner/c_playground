#include <stdio.h>
int main() {
	
    printf("Fibonacci\n");
    printf("This program calculates and prints all of the\n");
    printf("  nth terms of the Fibonacci Series\n");
    int i, n;

    // initialize first and second terms
    int t1 = 0, t2 = 1;

    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;

    // get no. of terms from user
    printf("Enter the number of terms(n): ");
    scanf("%d", &n);

    // print the first two terms t1 and t2
    printf("    Fibonacci Series fibinacci(%d): %d, %d, ", n, t1, t2);
  
    // print 3rd to nth terms
    for (i = 3; i <= n; ++i) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");
    printf("    fibinacci(%d)=%d ", n, t2);
    printf("\n");
    return 0;
}