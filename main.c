#include <stdio.h>
#include <stdlib.h>
#include "library.h"

/*How to compile
 * gcc -o main main.c library.c
 * */

int main (void){
  int n = 1;

  //Array of number for bubblesort testing:
  int* ptr;
  int array[4] = {4, 3, 2, 1};
  ptr = &array[0];

  do {
    printf("\nType what function you want to try:\n");
    printf("0. Exit\n");
    printf("1. Bubblesort\n");
    printf("2. Square root\n");

    fflush(stdin);
    scanf("%d", &n);

    switch (n){
      case 0:
        return 0;
        break;

      case 1:
        //Bubblesort, testing with array
        printf("\nBefore: %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
        Bubblesort(ptr, 4);
        printf("\nAfter: %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
        break;

      case 2:
        //Square root
        double res = SquareRoot(77);
        printf("\nSquare root of 77: %lf\n", res);
        break;

      default:
        printf("Command not found, try again\n");
        break;
    }
        printf("Press ENTER to continue\n");
        while(getchar()!='\n');
        getchar();
        system("clear");

  } while (n != 0);

  return 0;
}
