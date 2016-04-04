/* Pset2
 * Caesar.c
 * This program will encrypt user input using using caesar cipher.
 * Written by Mohamed Dukuray
 * CS50 20/04/2014
 */
 
 #include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 #include <ctype.h>
 #include <stdlib.h>
 
 //to get Key from the user
 int main( int argc, string argv[1])
 {
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        printf("\n");
        return 1;
    }
    //cast key "string" to "int"
    int key = atoi (argv[1]);
    
    
    //get string from user
    string userStr = GetString();
     
     //iterates over the chars* of string   
     for (int i = 0, n = strlen(userStr); i < n; i++)
            {
                
                // print out cipher
                if (isupper(userStr[i]))
                {
                    printf("%c", (userStr[i] - 'A'+ key)%26 +'A'); 
                } 
                else if (islower(userStr[i]))
                {
                    printf("%c", (userStr[i] -'a' + key)%26 + 'a'); 
                }
                else
                {
                   printf("%c", userStr[i]); 
                }
             }   
     printf("\n");
     return 0;              
 }
        {
           printf("%c", (uString[i]+key)%26); 
        }
    }
 }
