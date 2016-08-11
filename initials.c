#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Takes in a name (provided it consists only of spaces and alphabetical characters) and outputs the initials

// TODO: Figure out how to handle nonalpha chars

int main (void)
{   
    string user_name = GetString();
    printf("%c", toupper(user_name[0]));
    
    for (int i = 0, name_length = strlen(user_name); i < name_length; i++)
    {   
        if((isalpha(user_name[i])) && (user_name[i - 1] == ' '))
        {
            printf("%c", toupper(user_name[i]));
        }
    }
    
    printf("\n");
    
}