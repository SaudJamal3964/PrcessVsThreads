#define FILE_H

#include <stdio.h>
#include <string.h>
#include "data.h"

// Driver Code
void filing()
{
    // Substitute the file_path string
    // with full path of CSV file
    FILE* fp = fopen("file.csv", "a+");

    if (!fp) {
        // Error in file opening
        printf("Can't open file\n");
    }
 
    // Asking user input for the
    // new record to be added
    printf("\n\n TIME TAKE BY EACH ALGORITHM \n\n selection sort: %f, %f \nquick sort: %f, %f\nmerge sort: %f, %f\nfibonacci series: %f, %f\n",stt,spt,qtt,qpt,mtt,mpt,fibtt,fibpt);
 
    // Saving data in file
    fprintf(fp, "\n%d, %f, %f, %f, %f, %f, %f, %d, %f, %f",numberOfElements,stt,spt,qtt,qpt,mtt,mpt,fibs,fibtt,fibpt);
 
    fclose(fp);
}
