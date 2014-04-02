/*
*
*pset1, greedy
*
*by Chad M. Meece via edx
*
*meeceplex@live.com
*
*/
#include <stdio.h>
#include <cs50.h>
#include <math.h>

//Output the least number of coins to make any given change
int main(void)
{
    //Get amount due from user
    float balance;
    int round_bal;
    
    do
    {
        printf("Hola! Please enter change due: ");
        balance = GetFloat();
    }
    while (balance < 0);
    
    //Convert float to int
    round_bal = round(balance * 100);
        
    //Cycle coin count
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
        
    while (round_bal >= 25)
    {
        round_bal = round_bal - 25;
        quarters++;
    }
    while (round_bal >= 10)
    {
        round_bal = round_bal - 10;
        dimes++;
    }
    while (round_bal >= 5)
    {
        round_bal = round_bal - 5;
        nickels++;
    }
    while (round_bal >= 1)
    {
        round_bal = round_bal - 1;
        pennies++;
    }    
    
    //Count coins
    int total_coins;
    total_coins = (quarters + dimes + nickels + pennies);
    printf("%i\n", total_coins);
}
