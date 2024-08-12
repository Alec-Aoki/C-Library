# C-Library

## To-Do: make it an Data Structure Thingy

## How to Compile
- $ gcc -o main main.c library.c
- $ ./main

## Functions
- Bubblesort:
```c
void Bubblesort(int* pointerToArray, int sizeOfArray);
```
- Square root:
```c
double SquareRoot(double N);
```
- Power of:
```c
double ppow(double n, double exp);
```
- Factorial:
```c
unsigned long int Factorial(unsigned long int n);
```

## General Idea
Make a library in C containing ideas/algorithms that I learn throughout my Computer Science degree.
Functions:
1. Bubblesort (OK)
    - The simplest sorting algorithm possible. It checks if the element n of an array is higher than the element n-1 (or n+1, doesn't matter). If it is, it swaps them, eventually sorting them in ascending order.
2. Square Root (OK)
    - There are many ways to calculate a square root. An initial idea could be to estimate a certain starting number (i.e., if the number we want to find the square root of is N, we can take that starting number as N/2) and increment it by small bits, squaring that incremeted number and checking if we found the square root. That would look something like:
        ```c
        for (double i=(N/2); i*i<=N; i=i+0.000001){
            squareroot = i;
        }
        ```
    - That solution, although precise, takes too long and spends too much computing power. A much better solution is the approximation method, by which we place the possible square root in between to numbers (perfect squares) and change those numbers so that their squares are closer and closer to our number N.
    - We can simplify that solution (avoiding having to choose those two perfect squares). For more information on that, refer to the library.c code.
3. Power of (pow) (OK)
    - Works the same as in math.h. I wonder if there is a better way to do it other than a loop.
4. Factorial (OK)
    - Implemented recursively.
        ```
        F(n) = { 1, n=0 or n=1
               { n*F(n-1), n>1
        ```
5. Check if the number is prime (OK)
    - Checks if the number n is prime by definition.
    - One interesting idea is that of the Sieve of Eratosthenes, that can producuce a list of all prime numbers until a certain numbers. Check if a number is prime through that method, however, would be quite slow.
