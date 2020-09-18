#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SHIFTS 25
#define DICTLINES 8732
#define MAX_WORD_LENGTH 330
#define TOTAL_WORDS 37240

char shifts[SHIFTS];
int max_index;

char dictWords[8732][100];
char encryptedSentence[330];

	int sort(){
		FILE *fp;
		fp = fopen("../dictionary2.txt", "r");
		int i, j;
		char temp[330];
		for(int x = 0; x < DICTLINES; x++){
			fscanf(fp, "%s", dictWords[x]);
			//printf("%s\n", dictWords[x]);
		}
			
		for(i = 0; i < DICTLINES - 1; i++){
			for(j = i + 1; j < DICTLINES; j++){
				if(strcmp(dictWords[i], dictWords[j]) > 0){
					strcpy(temp, dictWords[i]);
					strcpy(dictWords[i], dictWords[j]);
					strcpy(dictWords[j], temp);
				}
			}
		}
		
		/*for(int h=0; h<DICTLINES;h++){
			printf("%s\n", dictWords[h]);
		}*/

		fclose(fp);
		return 0;
	}

	int openDict(char *decrypted, int key){
		//printf("%d %s\n", key, decrypted);
		
		int i, max, result, found;
		
		for(i=0; i < DICTLINES; i++){
			//printf("%s\n", dictWords[i]);
			
			max = shifts[0];
			
			result = strcmp(dictWords[i], decrypted);
			if(result == 0){
				shifts[key]++;
				//printf("%d\n", shifts[key]);
			}
			if(shifts[key] > 5){
				max_index = key;
			}
		}
		
		return 0;
	}
	

	//Decrypts word(s) from sentences
	//Passes decrypted word and key/shift to openDict() to check 
	//if it's in the dictionary
	char* decrypt(char *word){
		//printf("\n%s\n", word);
		char ch;
		
		char *decrypted;
		decrypted = malloc(MAX_WORD_LENGTH * sizeof *decrypted);
		
		for(int key = 1; key < 26; key++){
			for(int i=0; word[i] != '\0'; ++i){
				int k = 0;
				
				ch = word[i];

				if(ch >= 'A' && ch <= 'Z'){
					ch = ch - key;

					if (ch < 'A'){
						ch = ch + 'Z' - 'A' + 1;
					}

					 decrypted[i]= ch;
				}
				
			}	
			//printf("Shift Key: %d %s\n",key, decrypted);
			openDict(decrypted, key);
		}
		
		free(decrypted);
		return 0;
	}

	//Takes in sentence from encrypted_text
	//Splits sentence into words using strtok()
	//Pass word to decrypt()
	int split(char *l){
		char word[TOTAL_WORDS][20];
		char ch;
		int i, j, ctr;
		j=0; ctr = 0;

		for(i = 0; i <= (strlen(l)); i++){
			if(l[i] == ' ' || l[i] == '\0'){
				word[ctr][j] = '\0';
				ctr++;
				j = 0;
			}
			else{
				word[ctr][j] = l[i];
				j++;
			}
		}

		for(i = 0; i < ctr; i++){
			decrypt(word[i]);
			//printf("%s\n", word[i]);
		}

		return 0;
	}	


	//Reads encrypted_text using getline()
	int main(){
		FILE *fp;
		fp = fopen("shifts.txt", "w");

		char buffer[330];
		int count = 0;
		
		double time_spent = 0.0;
		clock_t begin = clock();
		
		sort();
			
		while((fgets(buffer, 330, stdin)) != NULL){
			count++;
			printf("%d\n", count);
			
			split(buffer);

			//printf("\nBest Shift: %d\n", max_index);
			
			fprintf(fp, "%d\n", max_index);

			for(int x = 1; x < 26; x++){
				shifts[x] = 0;
			}
		}

		clock_t end = clock();
		time_spent+=(double)(end-begin) / CLOCKS_PER_SEC;

		printf("Time elapsed is %f seconds\n", time_spent);


		fclose(fp);
		return 0;
	}

