//
// Created by Jordan on 10/3/2019.
//
#include <stdio.h>
#include "header.h"

int calculateFactorial(int n){
    if(n == 1 || n == 0)return 1;
    int current = n;
    for(int i = n - 1; i > 1; i--){
        current *= i;
    }
    return current;
}
int readIntegerFromFile(FILE *infile){
    int val = 0;
    fscanf(infile,"%d",&val);
    return val;
}
void printResult(int factorial){
printf("The factorial is %d",factorial);
}
