#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char name[50];
  printf("What is your name?\n>");
  scanf("49%s",name);
  printf("Hello, %s!\n",name);
  
  srand(time(NULL));

printf("Rolling dice...\n");
int die1 = rand()%6+1;
int die2 = rand()%6+1;
int total = die1+die2;

printf("Die 1: %d\n",die1);
printf("Die 2: %d\n",die2);
printf("total value: %d\n",total);

return 0;
}

