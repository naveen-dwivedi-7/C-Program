#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
// #define ONE_K (1024)

int main(){
    char *some_memory;
    // char *scan_ptr;
    some_memory=(char *)0;
    
    printf("A read from NULL %s\n", some_memory);
    sprintf(some_memory, "A write to null\n");
    exit(EXIT_SUCCESS);
}