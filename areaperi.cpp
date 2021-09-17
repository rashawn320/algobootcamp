#include<stdio.h>

int main() {
	int num1,num2,area,peri;
	scanf("%d %d",&num1,&num2);
	 area = num1*num2;
	 peri = 2*(num1+num2);
	if(area > peri){
	    printf("Area\n");
	    printf("%d",area);
	}
	else if(peri > area){
	    printf("Peri\n");
	    printf("%d",peri);
	}
	else {
		printf("Eq\n");
		printf("%d", area);
	}
	
	
	return 0;
}

