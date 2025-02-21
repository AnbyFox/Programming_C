#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int usernum = 1;
	
	printf("Choose a number to search to: ");
	scanf("%d", &usernum);
	
	printf("\nSimple numbers:");
	
	int num;
	for(num = 0; num <= usernum; num++) {
		
		int step, count = 0;
		for(step = 1; step <= num; step++) {
			if(num % step == 0) count++;
		}
	
		if(count == 2) printf("\n%d", num);
	}
    
    return 0;
}
