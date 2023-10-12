#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b) {
	return(a + b);
}
int square(int n) {
	return(n * n);
}
int get_max(int x, int y) {
	if(x>y)
	return x;
	
	return y;

}

int main(int argc, char* argv[]) {

	int result1, result2, result3;
	result1 = sumTwo(2,3);
	result2 = square(5);
	result3 = get_max(4,7);
	printf("sumTwo result : %d\n", result1);
	printf("square result : %d\n", result2);
	printf("get_max result : %d\n", result3);
}

