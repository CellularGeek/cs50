/* Pset2
 * Vigenere.c
 * Written by Mohamed Dukuray
 * CS50 20/04/2014
 *
 *
 * This program will encrypt user input using vigenere cipher.
 */
 
 #include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 #include <ctype.h>
 #include <stdlib.h>
 
 /* Get key from user and test that all the characters in the user
 key are all alphabetic characters, using islpha(). */
 
 int main( int argc, string argv[])
 {  
 
    // User inputs
    string userStr;
    string userKey = (argv[1]);
    
    // Key length
    int m = strlen(userKey);
    int j; 
    
    // Key check
    for (j = 0; j < m; j++)
    {
        if (argc != 2 || !isalpha(userKey[j]))
        {
            printf("Usage: ./vigenere key\"must be  letters\"");
            printf("\n");
            return 1;    
        } 
    }
    
   
    // Get a string from the user to encypher with the user key
    userStr = GetString();
    
    for (int i = 0; i < strlen(userStr); i++)
    {
 
        
        if (isupper(userStr[i]))
        {
            printf("%c",((userStr[i] - 'A') +  userKey[j % m] - 'A') %26 + 'A'); 
            j++;
        }    
        else if (islower(userStr[i]))
        {   
            printf("%c",((userStr[i] - 'a') +  userKey[j % m] - 'a') %26 + 'a'); 
            j++;
        }   
        else
        {   
            printf("%c", userStr[i]); 
        }
        
     }
     printf("\n");
    return 0;              
 }
