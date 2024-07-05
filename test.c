#include <stdio.h>

int main (void){
  int n = 1;

  do {
    printf("Type what function you want to try:.\n");
    printf("0. Exit\n");
    printf("1. Bubblesort\n");

    scanf("%d", &n);

    switch (n){
      case 0:
        return 0;
        break;
      case 1:
        //Bubblesort here
        break;
      default:
        printf("Command not found, try again\n");
        break;
    }
  } while (n != 0);

  return 0;
}
