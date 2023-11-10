#include <stdio.h>
#include <stdlib.h>
#include "practical6.h"
#include <time.h>
#define RAND_MAX

void populateArray(int *x, int N){
srand(clock());
    for (int i=0;i<N;i++){
        float M=1;
        x[i] =1+(int) (M*rand()/(RAND_MAX+1.0));

}
}
void printArray(int *x,int N){
for (int i=0;i<N;i++){
    printf("%d\t",i);
    printf("%d\n",x[i]);
}
}
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}
void sortArray(int *x,int N){
    int unordered=1;
    while (unordered==1){
        unordered=0;
        for (int i=0;i<N-1;i++){
            if (x[i]>x[i+1]){
                swap(&x[i],&x[i+1]);
                unordered =1;
            }


        }
    }
}


