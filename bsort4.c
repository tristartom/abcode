#include<stdio.h>

int c[]={ 9,7,3,2 };

void swapnext(int i){
    int z=c[i];
    c[i]=c[i+1];
    c[i+1]=z;
}

void cswap(int i){
  if(c[i+1] < c[i])
    swapnext(i);
}

void sort(){
  cswap(0);
  cswap(1);
  cswap(2);
  cswap(0);
  cswap(1);
  cswap(0);
}

int main(void){
  printf("begin:\t%d,%d,%d,%d\n", c[0],c[1],c[2],c[3]);
  sort();
  printf("end:\t%d,%d,%d,%d\n", c[0],c[1],c[2],c[3]);
}

