#include <stdio.h>

#include "ceaser.h"
#define MAX_WORD_LENGTH 330
#define SHIFTS 25

char shifts[SHIFTS];

//sort() opens and sorts dictionary2.txt
//Reads encrypted_text from stdin
//Passes each sentence to split() to split into words
//Writes best shifts to shifts.txt
//Resets shift counts after each sentence
int main(){
	FILE *fp;
	fp = fopen("shifts.txt", "w");
	openShifts(fp);
	char buffer[MAX_WORD_LENGTH];
	int count = 0, max = shifts[0];

	sort();
	int n;
	while((fgets(buffer, MAX_WORD_LENGTH, stdin)) != NULL){
		count++;
		printf("%d\n", count);
		split(buffer);

		fprintf(fp, "%d\n", bestShift());

		clearShifts();
		if(count == 50){
			break;
		}
	}
	fclose(fp);
	return 0;
}
