#include<stdio.h>

int a[]={ 7,9,3 };

void cswap(int*, int, int);

void sort(){
  cswap(a, 0, 1);
  cswap(a, 1, 2);
  cswap(a, 0, 1);
}

int main(void){
  printf("begin:\t%d,%d,%d\n", a[0],a[1],a[2]);
  sort();
  printf("end:\t%d,%d,%d\n", a[0],a[1],a[2]);
}

