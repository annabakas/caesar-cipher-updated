#ifndef _CEASER_H_

extern int openDict(char* filename);

extern int sort();

extern int stringCompare(char *dict, char *decrypted);

extern int findInDict(char *decrypted, int key);

extern char* shift(char *word, int key);

extern char* decrypt(char *word);

extern int split(char *l);

extern char clearShifts();

extern int bestShift();

#endif
