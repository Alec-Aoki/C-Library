/* Bubblesort Algorithm
 * Repeteadely goes over an array checking if an element is higher than the one next to it. If it is, it swaps them.
 * */
void Bubblesort(int* pointerToArray, int sizeOfArray){
  //Receives pointer to start of array 
  int aux_var; //Auxiliary variable to store variables between swapped
  
  for(int i=0; i<sizeOfArray; i++){
  //Going through the array sizeOfArray times
    for(int j=1; j<sizeOfArray; j++){
      if(pointerToArray[j] < pointerToArray[j-1]){
        //Swap them
        aux_var = pointerToArray[j-1];
        pointerToArray[j-1] = pointerToArray[j];
        pointerToArray[j] = aux_var;
      }
    }
  }
  return;
}

/* Square Root
 * Improved approximation method. Refer to https://stackoverflow.com/questions/1623375/writing-your-own-square-root-function for a better explanation.
 * Algorithm:
 *  -> take the number N
 *  -> take N_low = 0 and N_high = N
 *  -> sum N_low with N_high and divide it by 2, call it N_root
 *  -> square N_root
 *  -> if N_root squared %.4f == N, return N_root
 *  -> if N_root squared > N, N_high = N_root
 *  -> else if N_root squared < N, N_low = N_root
 * */

double SquareRoot(double N){
  double N_low = 0, N_high = N, N_root;

  if (N == 0 || N == 1){
    return N;
  }

  do {
    N_root = (N_low + N_high)/2;
    if ((N_root*N_root) > N){
      N_high = N_root;
    }
    else if ((N_root*N_root) < N){
      N_low = N_root;
    }
  } while (((float)(N_root*N_root)) != ((float)(N)));

  return N_root;
}

/*POW
n^exp = n*n, exp times
*/
double ppow(double n, int exp){
  double res=1;
  for(int i=1; i<=exp; i++){
    res = res*n;
  }
  return res;
}

/*Factorial
n! = n*(n-1)*(n-2)*...*1
Recursively:
F(n) = { 1, n=0 or n=1
       { n*F(n-1), n>1
*/
unsigned long int Factorial(unsigned long int n){
  if ((n == 0) || (n == 1)){
    return 1;
  }
  
  return (n * (Factorial(n-1)));
}