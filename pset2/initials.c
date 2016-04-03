// initials.c
// Pset2
// cs50 2014
// Mohamed Dukuray

/* The program asks a user for their name and then
prints their initials to screen. */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Array to hold the string name
    string name;
    
   // printf("What is you full name\n");
    name = GetString();
    
    // Print the first element of the array
    printf("%c", toupper(name[0]));
    for (int i = 0 +1, n = strlen(name); i < n;  i++)
    {
        // Test if name is all alphabet
        if (isdigit(name[i]))
        {
            printf("Name must only contain alphabets\n");
            exit (1);
        } 
         if (name[i] == ' ' && isalpha(name[i + 1 ]))
        {
            printf("%c", toupper(name[i + 1]));
        }
     }
     printf("\n");  
     return 0;
}
