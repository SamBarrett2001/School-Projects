#include <stdio.h>
int main() {
    int x1 = 2; // initial value of x1
    int x2 = 4; // initial value of x2
    int k;
    int xn; // current value of x
    int xnm1; // xn minus 1 (previous value)
    int n = x1 + x2; // sum of both x1 and x2
    int counter = 0;
    printf("%d Sum = %d\n", x1, x1); 
    printf("%d Sum = %d\n", x2, n);
    k = x2/x1;
    xnm1 = x1*k;
while (counter < 8) {
    xn = xnm1 * k; 
    n = n+xn;
    printf("%d Sum = %d \n", xn, n);
    xnm1 = xn;
    counter++;
}
    return 0;
}