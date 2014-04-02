/*
*
*pset1, mario
*
*by Chad M. Meece via edx
*
*meeceplex@live.com
*
*/

#include <stdio.h>
#include <cs50.h>

//Print half-pyramid of a specified height using spaces and hashtags
int main(void)
{
    int height, row, column;
     
    //Get height from 1 to 23 from user   
    do
    {
        printf("Height?");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    //Construct pyramid using coordinates
    for (row = 0; row < height; row++)
    {
        for (column = 0; column < (height+1); column++)
        {
            if (column < (height - (row + 1)))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
            
        }
        printf("\n");
    }
}
