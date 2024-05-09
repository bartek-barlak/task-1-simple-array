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


    do{
        menu();
        scanf("%d",&option);
        switch (option){
            case 0:
                break;
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;

            default:
                printf("Choose the right option\n");


        }


    }while (option  !=0);
    printf("END");



    return 0;
}