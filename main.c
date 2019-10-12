// Joseph Yusufov
// 2019-09-25

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    const int ARRAY_SIZE = 10;
    int coll[ARRAY_SIZE] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int other[ARRAY_SIZE];

    // ---------- Testing for Average Calculator ----------
    int avgToPrint = avgMachine(coll, ARRAY_SIZE);
    printf("%d\n", avgToPrint);
    printf("----------\n");

    // ---------- Testing for Array copier ----------
    arrayCopy(coll, other, ARRAY_SIZE);
    int i;
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d \n", other[i]);
    }
    printf("----------\n");

    // ---------- Testing the stringLength function ----------
    char str[] = "magnificentBeowulfthecool";

    printf("%d\n", stringLength(str));
    return 0;
}
