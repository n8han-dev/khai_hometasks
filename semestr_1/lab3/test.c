#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *value[] = {"2","3","4","5","6","7","8", "9","10","J","Q","K","A" };
const char *suit[] = {"Spades","Hearts","Clubs","Diamonds"};

int shuffle(int *deck)
  { 
    int temp=0, card=0, i=0; 
 
    for (i = 52 - 1; i > 0; i--)
      { 
        card = rand() % i;
        temp = deck[i];
        deck[i] = deck[card];
        deck[card] = temp;
      }
   }

int deal(int v, int s)
{
    int card=0;
    int deck[52]={0};
if ( card >= 52 )  
          card = shuffle(deck);
 
        /*value and suit*/
        v = deck[card] % 13;
        s = deck[card] / 13;
 
        /*display card*/
        printf("%2d > %s of %s\t\t",card,value[v],suit[s]);
        card++;
}
 
int main(void)
{
int deck[52]={0};
int card = 53, v=0, s=0, i=0;
srand(time(NULL));
 
/*initialize the deck*/
for (i = 0; i < 52; i++)
    deck[i] = i;
/*call to the function shuffle*/
card=shuffle(deck);
/* call to the function deal*/
deal(v, s);   
  return 0;
}
