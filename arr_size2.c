#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void fillArray(int* arr){
  srand(time(NULL));
  int size = arr[0];
  int i;
  for(i=1;i<=size;i++){
    arr[i]=rand()%100;
  }
}

void printArray(int* arr){
  
  int size = arr[0];
  int i;
  for(i=1;i<=size;i++){
    printf("arr[%d]=%d \n",i,arr[i]);
  }
  
}

int main()
{
    int* arr;
    
    arr = (int*) malloc((SIZE+1)*sizeof(int));
    arr[0]=SIZE;
    
    fillArray(arr);
    printArray(arr);
    
    free(arr);
    
    return 0;
    //printf("Hello, World!");
}
