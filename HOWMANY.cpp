#include <stdio.h>

int main(void) {
	
	int N;
	scanf("%d", &N);
	if (N < 10) {
		printf("1");
	} else if (N < 100) {
		printf("2");
	} else if (N < 1000) {
		printf("3");
	} else if (N >=1000) {
		printf("More than 3 digits");
	}
	
	return 0;
}
