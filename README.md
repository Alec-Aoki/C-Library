# C-Library

# C Library of my Computer Science Degree

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
    - That solution, although precise, takes too long and spends too much computing power. A much better solution is the approximation method, by which we place the possible square root in between to numbers (perfect squares) and change those numbers so that their squares are closer and closer to our number N.
    - We can simply that solution (avoiding having to choose those two perfect squares)
3. POW
4. Factorial
5. Find the prime number
