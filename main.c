#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int factorial(int n);

int combination(int n, int r) {
    int div1, div2;
    div1 = factorial(n);
    div2 = factorial(n - r) * factorial(r);
    return (div1 / div2);
}

int factorial(int n) {
    int res = 1;
    int i;
    for (i = 1; i <= n; i++)
        res = res * i;
    return res; 
}

int main(void) {
    int n, r;
    int result;
    printf("input n : ");
    scanf("%d", &n);
    printf("input r : ");
    scanf("%d", &r);

    result = combination(n, r);
    printf("result is %i\n", result);
    return 0;
}



