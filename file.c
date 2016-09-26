#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
float change = 0;
int cents=0;
int coins = 0;
int tventyfive = 0;
int ten = 0;
int five = 0;
int one=0;
int left=0;
  
do {
printf("How much change is owed?");
change = GetFloat();
}
while (change<=0); 

cents=(int)round(change*100);

tventyfive=cents/25;
left = cents%25;

ten= left/10;
left = left%10;
    
five=left/5;
left=left%5;
    
one=left/1;
left=left%1;

    
coins=tventyfive+ ten + five + one;   
printf ("%d\n",coins);

return 0;
}