#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    printf("How long do you shower (in minutes)? \n");
    int showerTime = GetInt();
    printf("minutes: %d \n", showerTime);
    printf("bottles: %d \n", 192/16 * showerTime);
    
}