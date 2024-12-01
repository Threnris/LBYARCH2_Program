#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

extern int* imgCvtGrayDoubleToInt(int height, int width, double* input, int* output);

int main() {
    int height, width;
    double* input;
    int* output;  


    

    printf("Enter height and width:\n");
    scanf_s("%d %d", &height, &width);

    input = (double*)malloc(height * width * sizeof(double));
    output = (int*)malloc(height * width * sizeof(int));

    printf("Enter %d double precision values:\n", height * width);
    for (int i = 0; i < height * width; i++) {
        if (scanf_s("%lf", &input[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(input);
            free(output);
            return 1;
        }
    }
   
    imgCvtGrayDoubleToInt(height, width, input, output);

  
    for (int i = 0; i < height * width; i++) {
        printf("%d ", output[i]);
        if ((i + 1) % width == 0) printf("\n");
    }

    free(input);
    free(output);

    return 0;
}
