1. In main() encryptedtext.txt is read line by line using fgets() until EOF. Each line is stored in a buffer that is passed to split() to split the sentence into words. openDict(filename) is called to sort the dictionary words from dictionary2.txt. After each sentence, the best shift is written to shifts.txt. Then, clearShifts() is called to reset the shift occurences in preparation for the next sentence.

2. In openDict(), dictionary2.txt is opened and passed to checkOpen() and readDict() to check if it was opened successfully and to read in the dictionary words into dictWords. sort() is then called to sort the dictionary words.

3. In checkOpen(), a file is passed to check if there was an error opening the file. If there was an error, a one is returned. If it was opened successfully, a zero is returned.

4. In readDict(), a file pointer is passed to read the dictionary words into dictWords.

5. In sort(), dictionary words are sorted alphabetically using selection sort. It loops through all the words in dictionary2.txt and calls stringCompare() to compare the first word from the outer loop to the next word in the inner loop. If the outer loop word is alphabetically greater than the inner loop word, then the words are swapped. The words are stored in a 2D array called dictWords[][]. I chose selection sort to sort the dictionary words because it will be quicker to determine if a decrypted word is in the dictionary. Identical words will be next to eachother, as they will be sorted alphabetically, which means that that all of dictWords won't have to be traversed to find the occurences of the decrypted word.

6. In stringCompare(), two char pointers are passed in from findInDict(). These are a dictionary word and a decrypted word. The two words are compared using strcmp. If the words are equal, 0 is returned. If not, 1 is returned.

7. In split(), a char pointer is passed in from main(). split() splits the sentence into words at spaces and stores the words in a 2D array called word[][]. Each word of the sentence is then passed to decrypt().

8. In decrypt(), a char pointer is passed in from split(). decrypt() tries all 26 shifts for each word. It passes each word and key to shift() to be shifted. After each word is shifted, the decrypted word and key are then passed to findInDict() to see if the decrypted word is an English word.

9. In shift(), a char pointer and int key is passed from decrypt(). shift() shifts each word. It checks that all characters are in the range A-Z and if not, it loops around so that the character is back in the correct range. It returns the newly shifted word.

10. In findInDict(), a char pointer and int key is passed from decrypt(). findInDict() loops through dictWords and passes the dictionary word and decrypted word to stringCompare() to compare the words. If the two words are the same, increment() is called.

11. In increment(), shifts[key], an array that holds the occurrences of the shifts, is incremented.

12. In bestShift(), the shift key with the most occurrences is returned.

13. In clearShifts(), the shift occurences in shifts[] are reset to 0 for the next sentence.
