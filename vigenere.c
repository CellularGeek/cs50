/* Pset2
 * Vigenere.c
 * Written by Mohamed Dukuray
 * CS50 20/04/2014
 */
 
 // This program will encrypt user input using vigenere cipher.
 
 #include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 #include <ctype.h>
 #include <stdlib.h>
 
 /* Get key from user and test that all the characters in the user
 key are all alphabetic characters, using islpha(). */
 
 int main( int argc, char* argv[])
 {  
    if (argc != 2 && !isalpha(argv[1]))
       {
            printf("Usage: ./vigenere key\"must be a letters\"");
            printf("\n");
            return 1;
       }

        int keyCount = 0;
        char* userKey = argv[1];
        string userStr;
        
        // Get a message from the user to encypher with the user key
        
        printf("What message do you want to encrypt?\n");
        userStr = GetString();
            int j = 0;
            for(int i = 0, n = strlen(userStr); i < n; i++)
            {
                if (isupper(userStr[i]))
                {
                    printf("%c", (userStr[i] - 'A'+ (userKey[j]-'A'))%26 +'A'); 
                    keyCount++;
                }    
                else if (islower(userStr[i]))
                {
                    printf("%c", (userStr[i] -'a' + (userKey[j]-'a'))%26 + 'a'); 
                    keyCount++;
                }
                else
                {
                    printf("%c", userStr[i]); 
                }
            }   

    printf("\n");
    return 0;              
 }
