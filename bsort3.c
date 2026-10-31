#include<stdio.h>

int a[]={ 5,3,7,9,1 };

void cswap(int*, int, int);

//cswap(a, 0, 1);

void sort(){
  cswap(a,0,1);
  cswap(a,1,2);
  cswap(a,2,3); 
  cswap(a,3,4);//a[4] is largest
  cswap(a,0,1);
  cswap(a,1,2);
  cswap(a,2,3);//a[3] is second largest
  cswap(a,0,1);
  cswap(a,1,2);//a[2] is third largest
  cswap(a,0,1);//a[0] is fifth largest, a[1] is fourth largest
}

int main(void){
  printf("begin:\t%d,%d,%d,%d,%d\n", a[0],a[1],a[2],a[3],a[4]);
  sort();
  printf("end:\t%d,%d,%d,%d,%d\n", a[0],a[1],a[2],a[3],a[4]);
}

