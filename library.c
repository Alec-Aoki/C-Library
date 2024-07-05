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
