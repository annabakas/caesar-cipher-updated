#ifndef _CEASER_H_

extern char dictWords[8732][100];

extern int checkOpen(FILE *fp);

extern void readDict();

extern int openDict(char* filename);

extern int sort();

extern int stringCompare(char *dict, char *decrypted);

extern int increment(int key);

extern int findInDict(char *decrypted, int key);

extern char* shift(char *word, int key);

extern int decrypt(char *word);

extern int split(char *l);

extern char clearShifts();

extern int bestShift();

#endif
