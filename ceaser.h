#ifndef _CEASER_H_

extern void openDict();

extern int sort();

extern int stringCompare(char *dict, char *decrypted);

extern int findInDict(char *decrypted, int key);

extern char* shift(char *word, int key);

extern char* decrypt(char *word);

extern int split(char *l);

extern int clearShifts();

extern int bestShift();

#endif
