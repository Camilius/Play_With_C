/******************************************************************************

Playing with arrays. 

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arrSizeI(int* arr){
    int n=0;
    n = strlen(arr)/sizeof(int);
    return n;
}

int arrSizeF(float* arr){
    int n=0;
    n = strlen(arr)/sizeof(float);
    return n;
}

int arrSizeD(double* arr){
    int n=0;
    n = strlen(arr)/sizeof(double);
    return n;
}

void printArrayI(int* arr){
    int N = arrSizeI(arr);
    printf("size od array: %d: \n",N);
    int i;
    
    for(i=0;i<N;i++)
        printf("arr[%d]: %d ",i,arr[i]);
}

void printArrayF(float* arr){
    int N = arrSizeF(arr);
    printf("size od array: %d: \n",N);
    int i;
    
    for(i=0;i<N;i++)
        printf("arr[%d]: %f ",i,arr[i]);
}

void printArrayD(double* arr){
    int N = arrSizeD(arr);
    printf("size od array: %d: \n",N);
    int i;
    
    for(i=0;i<N;i++)
        printf("arr[%d]: %f ",i,arr[i]);
}

int main()
{
    
    int *arr;
    float *arr2;
    int N = 1000;
    long n = 0;
    
    int i;
    
    //for(i=0;i<100;i++){
        arr = (int*) calloc(N+1,sizeof(int));
        memset(arr,255,(N+1)*sizeof(int)-1);
       
        n = arrSizeI(arr);
        printf("size od array: %d: \n",n);
        
        
        arr2 = (int*) calloc(N+1,sizeof(float));
        memset(arr2,255,(N+1)*sizeof(float)-1);
       
        n = arrSizeF(arr2);
        printf("size od array: %d: \n",n);
        
        printArrayF(arr2);
        
   
        free(arr);
        free(arr2);
       
    //}
    
    return 0;
}
