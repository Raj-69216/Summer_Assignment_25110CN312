#include <stdio.h>
#include <ctype.h>
int main(){int secret=42,guess,att=0;printf("=== Number Guessing Game (1-100) ===\n");do{printf("Guess: ");scanf("%d",&guess);att++;if(guess<secret)printf("Too low!\n");else if(guess>secret)printf("Too high!\n");else printf("Correct in %d attempts!\n",att);}while(guess!=secret);
return 0;}