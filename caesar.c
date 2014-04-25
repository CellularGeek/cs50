/* Pset2
 * Caesar.c
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
    //cast key "string" to "int"
    int key = atoi (argv[1]);
    
    //get string from user
    string uString;
    do
    {
        uString = GetString();
    }
    while ( uString != NULL);
    
    for (int i = 0, n = strlen(uString); i < n; i++)
    {
        if (isupper(uString[i]) || islower(uString[i]))
        {
            printf("%c", (uString[i]+key)%26); 
        } 
        else
        {
           printf("%c", (uString[i]+key)%26); 
        }
    }
 }
