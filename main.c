#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX

int main()
{
    int N=10;
    int x[N];
    populateArray(x,N);
    printf("==========Before Sort==========\n");
    printArray(x,N);
    sortArray(x,N);
    printf("==========After Sort==========\n");
    printArray(x,N);
    return 0;
}
