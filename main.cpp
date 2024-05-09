#include <iostream>
#include "array.h"

void menu (void) {
    printf("1. Enter the values into the array\n");
    printf("2. Determine the content of the array\n");
    printf("3. Determine the minimum value\n");
    printf("4. Determine the maximum value\n");
    printf("5. Determine the average value\n");
    printf("0 EXIT\n");
    printf("Select the option \n");

}int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    printf("Simple array...\n");

    int option = 0;
    int minimum = findMiniumValue(array);
    int maximum = findMaximumValue(array);
    float average = calculateAverage(array);

    do{
        menu();
        scanf("%d",&option);
        switch (option){
            case 0:
                break;
            case 1:
                printf("1. Enter the values into the array\n\n");
                enterValue(array);
                break;
            case 2:
                printf("2. Determine the content of the array\n\n");
                printArray(array);
                break;
            case 3:
                printf("3. Determine the minimum value\n\n");
                printf("minimum value = %d\n",minimum);
                break;
            case 4:
                printf("4. Determine the maximum value\n\n");
                printf("maximum value = %d\n",maximum);
                break;
            case 5:
                printf("5. Determine the average value\n\n");
                printf("Average value = %f\n", average);
                break;

            default:
                printf("Choose the right option\n");


        }


    }while (option  !=0);
    printf("END");



    return 0;
}