#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main (void)
{
// Here I generate for both computed players (HandA and HandB) a number between 0 and 3//
  srand(time(NULL));
  int HandA;
  int HandB;
  HandA =rand()%3;
  HandB =rand()%3;
  // With: 0-Rock,1-Paper,2-Scissors I have used if and else if statements to print the relevant results in the different combinations of generated random numbers including each different type of tie//
if ((HandA==0 && HandB==1) || (HandA==1 && HandB==0))
printf("Paper beat rock");
else if ((HandA==1 && HandB==2) || (HandA=2 && HandB==1))
printf("Scissor beat paper");
else if ((HandA==0 && HandB==2) || (HandA==2 && HandB==0))
printf("Rock beat scissors");
else if (HandA==0 && HandB==0) 
  printf("Tie: Rock and Rock");
else if (HandA==1 && HandB==1)
printf("Tie: Paper and Paper"); 
else if (HandA==2 && HandB==2)
printf("Tie: Scissors and Scissors");
}
