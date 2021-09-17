#include <stdio.h>

int main () {
	int N1, N2,x,y;
	scanf("%d %d", &N1, &N2);
	x=N1-N2;
	y=N1+N2;
	if (N1 > N2) {
		printf("%d", x);
	} else{
		printf("%d", y);
	}
	
	return 0;
}
