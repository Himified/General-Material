#include <stdio.h>
#include <stdlib.h>
extern /*@only@*/ int *glob;
int *glob;
/*@only@*/ int *f(/*@only@*/int *x, int *y,int *z)
{
    int *m = (int *)malloc(sizeof(int));
    glob = y; //Memory leak
    free(x);
    *m = *x;  //Use after free
    return z; //Memory leak detected
}

int WinMain()
{
    printf("Checking Memory management errors including uses of dangling references and memory leaks");
    return 0;
}