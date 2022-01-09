#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]) {
   
    int *p; 
    p =(int*)malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d) memory address of p: %08x\n", (int) getpid(), p);
    *p =0 ; // assign value to addr stored in p
    while (1) {
	Spin(1);
	*p = *p + 1;
	printf("(%d) p: %d\n", getpid(), *p);
    }
    return 0;
}
