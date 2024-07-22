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
    printf("3. Power of (pow)\n");
    printf("4. Factorial\n");
    printf("5. Check if it's prime\n");

    fflush(stdin);
    scanf("%d", &n);

    switch (n){
      case 0:
        return 0;
        break;

      case 1:
        //Bubblesort, testing with array
        printf("Before: %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
        Bubblesort(ptr, 4);
        printf("\nAfter: %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
        break;

      case 2:
        //Square root
        double res = SquareRoot(77);
        printf("Square root of 77: %lf\n", res);
        break;

      case 3:
        //Pow
        printf("2^3 = %.2lf\n", ppow(2, 3));
        break;

      case 4:
        //Factorial
        printf("5! = %lu\n", Factorial(5));
        break;

      case 5:
        //Check if the number is prime
        if(isPrime(5)){
          printf("5 is prime\n");
          break;
        }
        printf("5 is not prime\n");
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
