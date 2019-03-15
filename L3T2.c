#include <stdio.h>
int main() {
    int x1 = 0;
    int x2 = 2;
    int d;
    int xn;
    int xnm1;
    int n = x1 + x2;
    int counter = 0;
    printf("%d Sum = %d\n", x1, x1);
    printf("%d Sum = %d\n", x2, n);
    d = x2 - x1;
    xnm1 = x1+d;
while (counter < 8) {
    xn = xnm1 + d;
    n = n+xn;
    printf("%d Sum = %d\n", xn, n);
    xnm1 = xn;
    counter++;
}
    return 0;
}