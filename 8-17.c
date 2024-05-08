#include <stdio.h>

void main()
{
	int aa[9][9];
	int i, k;
	for (i=0; i<9; i++){
		for (k=0; k<9; k++){
			aa[i][k]=(k+2)*(i+1);
		}
	}

	for (i=0; i<9; i++) {
		for (k=0; k<8; k++){
			printf("%dX%d=%2d\t", k+2, i+1, aa[i][k]);
		}
		printf("\n");
	}
}
