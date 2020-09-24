1. In main() encryptedtext.txt is read line by line using fgets() until EOF. Each line is stored in a buffer that is passed to split() to split the sentence into words. sort() is called to sort the dictionary words. After each sentence, the best shift is written to shifts.txt. Then, clearShifts() is called to reset the shift occurences in preparation for the next sentence.

2. In sort(), openDict() is called. sort() sorts dictionary2.txt alphabetically using selection sort. It loops through all the words in dictionary2.txt and compares the first word from the outer loop to the next word in the inner loop. If the outer loop word is alphabetically greater than the inner loop word, then the words are swapped. The words are stored in a 2D array called dictWords[][].

3. In openDict(), dictionary2.txt is opened and read into dictWords.

4. In split(), a char pointer is passed in from main(). split() splits the sentence into words at spaces and stores the words in a 2D array called word[][]. Each word of the sentence is then passed to decrypt().

5. In decrypt(), a char pointer is passed in from split(). decrypt() tries all 26 shifts for each word. It passes each word and key to shift() to be shifted. After each word is shifted, the decrypted word and key are then passed to findInDict() to see if the decrypted word is an English word.

6. In shift(), a char pointer and int key is passed from decrypt(). shift() shifts each word. It checks that all characters are in the range A-Z and if not, it loops around so that the character is back in the correct range. It returns the newly shifted word.

7. In findInDict(), a char pointer and int key is passed from decrypt(). findInDict() loops through dictWords and passes the dictionary word and decrypted word to stringCompare() to compare the words. If the two words are the same, then shifts[key],an array that holds the occurrences of the shifts, is incremented. If shifts[key] > 5, that shift is considered the best shift.

8. In stringCompare(), two char pointers are passed in from findInDict(). These are a dictionary word and a decrypted word. The two words are compared using strcmp. If the words are equal, 0 is returned. If not, 1 is returned.

9. In clearShifts(), the shift occurences in shifts[] are reset to 0 for the next sentence.
