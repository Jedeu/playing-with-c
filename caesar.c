#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Not enough arguments given!");
        return 1;
    }
    else
    {   
        
        int key = atoi(argv[1]);
        string string_to_transform = GetString();
        
        for (int i = 0, string_length = strlen(string_to_transform); i < string_length; i++)
        {
            if ( isalpha(string_to_transform[i]) )
            {
                if (isupper(string_to_transform[i]))
                    {
                        int upper_alpha_position = ((string_to_transform[i] - 'A') + key) % 26;
                        printf("%c", 'A' + (char) upper_alpha_position);
                    }
                else if (islower(string_to_transform[i]))
                    {
                        int lower_alpha_position = ((string_to_transform[i] - 'a') + key) % 26;
                        printf("%c", 'a' + (char) lower_alpha_position);
                    }
            }
            else 
            {
                printf("%c", string_to_transform[i]);
            }
            
        }
        
        printf("\n");
    
        return 0;
    }
}