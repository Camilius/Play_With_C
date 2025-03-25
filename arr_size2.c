#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 512

void fillArrayI(int* arr){
  srand(time(NULL));
  int size = arr[0];
  int i;
  for(i=1;i<=size;i++){
    arr[i]=rand()%100;
  }
}

void printArrayI(int* arr){
  
  int size = arr[0];
  int i;
  for(i=1;i<=size;i++){
    printf("arr[%d]=%d \n",i,arr[i]);
  }
  
}


void fillArrayC(char* arr){
  srand(time(NULL));
  int size = *((int*) arr);
  int i;
  for(i=sizeof(int);i<size+sizeof(int);i++){
    arr[i]=rand()%94+33;
  }
}

void printArrayC(char* arr){
  
  int size = *((int*) arr);
  int i;
  for(i=sizeof(int);i<size+sizeof(int);i++){
    printf("arr[%d]=%c \n",i,arr[i]);
  }
  
}

void printArrayC2(char* arr){
  printf("%s \n",arr+sizeof(int);
}

int main()
{
    int* arr;
    char* arr2; 
    
    arr = (int*) malloc((SIZE+1)*sizeof(int));
    arr[0]=SIZE;
    
    arr2 = (char*) malloc((SIZE)*sizeof(char)+1*sizeof(int));
    *((int *)arr2)=SIZE;
    
    //fillArrayI(arr);
    //printArrayI(arr);
    
    fillArrayC(arr2);
    printArrayC(arr2);
    printArrayC2(arr2);
    
    free(arr);
    free(arr2);
    
    return 0;
    //printf("Hello, World!");
}
