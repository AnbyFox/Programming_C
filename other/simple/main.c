#include <stdio.h>

int type(int num) {
	int step, count = 0;
	for(step = 1; step <= num; step++) if(num % step == 0) count++;
	if(count == 2) return num;
	return 0;
}

int main(int argc, char *argv[]) {
	printf("Type the number range: ");
	
	int range = 1;
	scanf("%d", &range);
	
	int num, max;
	for(num = 0; num <= range; num++) if(type(num) > max) max = type(num);
	
	printf("The max simple number: %d", max);
    return 0;
}
