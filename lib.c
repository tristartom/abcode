void cswap(int* array, int i, int j){
  int temp;
  if(array[i] > array[j]){
    temp = array[i];
    array[i]=array[j];
    array[j]=temp;
  }}
