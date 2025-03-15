#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "addstuff.h"

int main(int argc, char *argv[]) {
	
	double a, b, c;
	
	printf("Type a value for A side: ");
	scanf("%lf", &a);
		
	printf("Type a value for B side: ");
	scanf("%lf", &b);
		
	printf("Type a value for C side: ");
	scanf("%lf", &c);
	
	if((a + b) > c && (b + c) > a && (a + c) > b) {
		double curP, curS;
		curP = Pmath(a, b, c);
		curS = Smath(a, b, c, curP/2);
		
		printf("\nTriangle's P: %lf", curP);
		printf("\nTriangle's S: %lf", curS);
	} else {
		printf("\nTriangle doesn't exist.");
	}

	return 0;
}
