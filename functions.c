// Joseph Yusufov
// 2019-09-25

#include <stdio.h>
#include <stdlib.h>

int avgMachine(int *arr, int arraySize){
    int i;
    int sum = 0;
    for(i = 0; i < arraySize; i++){
        sum += *(arr + i);
    }
    int avg = sum / arraySize;
    return avg;
}

int arrayCopy(int *stamp, int *blank, int arraySize){
    int i;
    for(i = 0; i < arraySize; i++){
        *(blank + i) = *(stamp + i);
    }
    return 0;
}

int stringLength(char *string){
    int i;
    for(i = 0; *(string + i) != '\0'; i++){ // As long as this character is not null, increment i
    }
    return i;
}

