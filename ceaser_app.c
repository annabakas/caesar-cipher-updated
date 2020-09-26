#include <stdio.h>

#include "ceaser.h"
#define MAX_WORD_LENGTH 330
#define SHIFTS 25

char shifts[SHIFTS];
int main(){
	FILE *fp;
	fp = fopen("shifts.txt", "w");

	char buffer[MAX_WORD_LENGTH];
	int count = 0, max = shifts[0];

	sort();
	int n;
	while((fgets(buffer, MAX_WORD_LENGTH, stdin)) != NULL){
		count++;
		printf("%d\n", count);
		split(buffer);

		printf("\nBest Shift: %d\n", bestShift());
		fprintf(fp, "%d\n", bestShift());

		clearShifts();
		if(count == 50){
			break;
		}

	}
	
	fclose(fp);
	return 0;
}
