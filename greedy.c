#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main (void)
{   
    float ChangeToGive;
    int NumOfCoins = 0;
    int ChangeInCents;
    
    do {
        printf("O hai! How much change is owed? \n");
        
        ChangeToGive = GetFloat();
        
    } while (ChangeToGive < 0);
    
    ChangeInCents = (int) round(ChangeToGive * 100);
    
    while (ChangeInCents >= 25)
    {
        NumOfCoins += 1;
        ChangeInCents -=25;
        
    }
    
    while (ChangeInCents >= 10)
    {
        NumOfCoins += 1;
        ChangeInCents -= 10;
    }
    
    while (ChangeInCents >= 5)
    {
        NumOfCoins += 1;
        ChangeInCents -= 5;
    }
    
    if (ChangeInCents == 1)
    {
        NumOfCoins +=1;
        ChangeInCents -= 1;
    }
    
    printf("%d\n", NumOfCoins);
}
