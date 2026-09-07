#include<stdio.h>

int c[]={ 9,7,3 };

#define swap(x,y) do{int z=x;x=y;y=z;}while(0)

void sort(){
  if(c[1] < c[0])
    swap(c[0], c[1]);
  if(c[2] < c[1])
    swap(c[1], c[2]);
  if(c[1] < c[0])
    swap(c[0], c[1]);
}

int main(void){
  printf("begin:\t%d,%d,%d\n", c[0],c[1],c[2]);
  sort();
  printf("end:\t%d,%d,%d\n", c[0],c[1],c[2]);
}

