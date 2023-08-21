#include <stdio.h>

void reset_to_98(int *p) {
    *p = 98;
}

int main() {
	int n;
	n = 402;

	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return 0;
}
