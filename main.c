#include <stdio.h>
#include "library.h"

/*How to compile
 * gcc -o main main.c library.c
 * */

int main (void){
  int n = 1;

  int* ptr;
  int array[4] = {4, 3, 2, 1};
  ptr = &array[0];

  do {
    printf("Type what function you want to try:\n");
    printf("0. Exit\n");
    printf("1. Bubblesort\n");

    scanf("%d", &n);

    switch (n){
      case 0:
        return 0;
        break;
      case 1:
        //Bubblesort here
        Bubblesort(ptr, 4);
        printf("\n\n%d %d %d %d\n\n", ptr[0], ptr[1], ptr[2], ptr[3]);
        break;
      default:
        printf("Command not found, try again\n");
        break;
    }
  } while (n != 0);

  return 0;
}
