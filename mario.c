#include <cs50.h>
#include <stdio.h>

// Takes in a number as a height of the half-pyramid and outputs the half-pyramid provided that the height does not exceed 23
// as per the course's instructions

int main(void)
{   
    int PyramidHeight;
    
    do
    {   
        printf("Enter the height of the half-pyramid: \n");
        PyramidHeight = GetInt();
        
        if (PyramidHeight == 0)
        {
            return 0;
        }
        
    } while ((PyramidHeight <= 0) || (PyramidHeight > 23));
    
    for (int i = 0; i < PyramidHeight; i++)
    {   /*Don't add spaces to a half-pyramid of height 1 nor to bottom row of half-pyramid*/
        if (PyramidHeight == 1 || i == PyramidHeight - 1) 
        {
            printf("%.*s", i + 2, "########################");
            printf("\n");
        }
        else
        {
            printf("%.*s", PyramidHeight - i - 1, "                      ");
            printf("%.*s", i + 2, "########################");
            printf("\n");
        }
        
    }
    
}
