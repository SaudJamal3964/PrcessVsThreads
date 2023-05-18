#include <stdio.h>

#include "../includes/merge.h"
#include "../includes/quick.h"
#include "../includes/selection.h"
#include "../includes/fibonacci.h"
#include "../includes/file.h"

void selectionAnalysis() {
    printf("--------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tSELECTION SORT\n");
    printf("--------------------------------------------------------------------------------\n");
    selectionSortThread();
    selectionSortProcess();
}

void fibonacciAnalysis() {
    printf("--------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tFIBONACCI SERIES\n");
    printf("--------------------------------------------------------------------------------\n");
    fibonacciThread();
    fibonacciProcess();
}

int mergeAnalysis() {
    printf("--------------------------------------------------------------------------------\n");
    //printf("\n");
    printf("\t\t\t\t\tMERGE SORT\n");
    printf("--------------------------------------------------------------------------------\n");
    mergeSortThread();
    mergeSortProcess();
}

int quickAnalysis() {
    printf("--------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tQUICK SORT\n");
    printf("--------------------------------------------------------------------------------\n");
    quickSortThread();
    quickSortProcess();
}

int main(int argc, char const *argv[]){

    makeArray();
    setter();
    mergeAnalysis();
    printf("\n\n");
    printf("\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
    printf("\n\n");
    sleep(2);
    quickAnalysis();
    printf("\n\n");
    printf("\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
    printf("\n\n");
    sleep(2);
    selectionAnalysis();
    printf("\n\n");
    cleanArray();
    printf("\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
    printf("\n\n");
    sleep(2);
    fibonacciAnalysis();
    sleep(2);
    filing();
    
    return 0;
}
