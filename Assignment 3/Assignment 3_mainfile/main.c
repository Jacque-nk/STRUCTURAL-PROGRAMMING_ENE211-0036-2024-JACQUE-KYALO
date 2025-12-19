#include <stdio.h>
#include <stdlib.h>

int add(int x, int y){
     return x + y;
     }

void swapNumbers(int *a, int *b){
    int Swap;
    Swap = *a; // Stores value of *a
    *a = *b;   // Assigns *b to *a
    *b = Swap; // Assigns Swap to *b //#Gets original Value
}

void increment_Value(int w){
     w = w + 2;

}

void increment_Referencing(int *v){
     *v = *v + 3;
}



int main()
{
    // Display Address of a Variable
    int num = 12;
    int *numPtr = &num;


    printf("The value stored is: %d\n", *numPtr);
    printf("The address of the stored value: %p\n\n", numPtr); //numPtr = &num //%p Format specifier thst pass addresses

    // Access Variable Using Pointer
    int count = 20;
    int *pCount = &count;

    *pCount = 35;
    printf("The new assigned value of count is: %d\n\n", count);

    // Add two numbers using Pointers
    int num1 = 20;
    int *ptr1 = &num1;
    int num2 = 25;
    int *ptr2 = &num2;

    int result = add(*ptr1, *ptr2);
    printf("Sum num1 and num2 = %d\n\n", result);

    // Swap two numbers using Pointers
    int Num1 = 5;
    int *ptrNum1 = &Num1;
    int Num2 = 10;
    int *ptrNum2 = &Num2;

    swapNumbers(ptrNum1, ptrNum2);
    printf("Result is Swapped numbers of a to b vice versa: %d, %d\n\n", *ptrNum1,*ptrNum2);// a is the pointer that stores the address

    //Pass Value vs Referencing
    int Value = 2;

    increment_Value(Value);
    printf("New value is: %d\n", Value);// Result is unchanged


    int Referencing = 2;

    increment_Referencing(&Referencing);
    printf("New value is: %d\n", Referencing);// Result is modified




    return 0;
}
