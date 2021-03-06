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
	checkOpen(fp);

	char buffer[MAX_WORD_LENGTH];
	int count = 0, max = shifts[0];
	
	char filename[20] = "../dictionary2.txt";
	openDict(filename);
	int n;
	while((fgets(buffer, MAX_WORD_LENGTH, stdin)) != NULL){
		count++;
		printf("%d\n", count);
		split(buffer);

		fprintf(fp, "%d\n", bestShift());

		clearShifts();
	}
	fclose(fp);
	return 0;
}
