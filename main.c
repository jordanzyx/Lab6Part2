#include <stdio.h>
#include "header.h"

int main() {
    FILE *infile = NULL;
    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab6Part2\\input.txt", "r");

    int n = readIntegerFromFile(infile);

    int factorial = calculateFactorial(n);

    printResult(factorial);

    return 0;
}