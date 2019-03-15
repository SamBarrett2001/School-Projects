#include <stdio.h>
int main() {
    int x1 = 0; // initial value of x1
    int x2 = 2; //initial value of x2
    int d;
    int xn; // current value of x
    int xnm1; // xn minus 1 (previous value)
    int counter = 0;
    printf("%d \n", x1);
    printf("%d \n", x2);
    d = x2 - x1;
    xnm1 = x1+d;
while (counter < 8) {
    xn = xnm1 + d;
    printf("%d \n", xn);
    xnm1 = xn;
    counter++;
}
    return 0;
}