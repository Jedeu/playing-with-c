#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

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