#include <stdio.h>
#include "combinatorics.h"

extern int extern_count;
int i_global_count = 0;
int global_count;

int main() {
	int n, k, local_count;
	local_count = i_global_count = extern_count = 0;

	printf("This program can count C(n,k)\n");
	do {
		printf("Test %d: Enter n,k: ", ++local_count);
		scanf("%d %d", &n, &k);
		printf("C(%d,%d)=%d\n", n, k, C(n, k));
	} while (n != 0 || k != 0);

	printf("You tried %d times\n", local_count);
	return 0;
}