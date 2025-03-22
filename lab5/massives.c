#include <stdio.h>
#include <stdlib.h>

double** massiveOperation(int size, double **M1, double **M2, char operation) {
	
	int n = size;
	
    double **M;
	M = (double**)malloc(n*sizeof(double*));
	
	for(int i = 0; i < n; i++) {
		M[i] = (double*)malloc(n*sizeof(double));
	}
	
	if(operation == '-') {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				M[i][j] = M1[i][j] - M2[i][j];
			}
		}  	
	} else if(operation == '*') {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				M[i][j] = M1[i][j] * M2[i][j];
			}
		}  
	} else if(operation == '/') {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				M[i][j] = M1[i][j] / M2[i][j];
			}
		}  
	} else {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				M[i][j] = M1[i][j] + M2[i][j];
			}
		}  
	}
	
	printf("Result Massive = [\n");
	for(int i = 0; i < n; i++) {
	    for(int j = 0; j < n; j++) {
	    	if(j == 0) printf("  ");
			printf("[%lf]", M[i][j]);
			if(j == (n-1)) printf("\n");
	    }
	} 
	printf("]\n\n");
	
	for(int i = 0; i < n; i++) {
		free(M[i]);
	}
	free(M);
}