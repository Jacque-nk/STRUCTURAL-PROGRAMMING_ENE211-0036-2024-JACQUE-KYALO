# Pointer Related Concepts

## Difference between a Normal Variable and a Pointer

| Features | Normal Variable | Pointer |
|----------|----------------|---------|
| What it stores | Stores the actual value | Stores the address of another variable |
| How memory is accessed | Accessed directly using the variable name | Accessed indirectly using dereferencing (`*`) |
| How values are read | By writing the variable name | By dereferencing the pointer (`*pointer`) |
| How values are modified | Assign a new value directly | Modify the value by dereferencing (`*pointer = value`) |

---

## Variable Declaration and Definition vs Pointer Declaration and Definition

| No. | Variable Declaration and Definition | Pointer Declaration and Definition |
|-----|-----------------------------------|----------------------------------|
| 1 | Stores an actual value<br>Example: `int x = 20;` | Stores the address of a variable<br>Example: `int *p = &x;` |
| 2 | Value is accessed directly using variable name<br>Example: `printf("%d", x);` | Address is accessed using pointer name, value via dereferencing<br>Example: `printf("%d", *p);` |
| 3 | Address operator `&` is used to get its address<br>Example: `printf("%p", &x);` | Address operator `&` is used during initialization<br>Example: `p = &x;` |
| 4 | Dereferencing operator `*` is not used with normal variables<br>Example: `int x = 10;` | Dereferencing operator `*` is used to access value at address<br>Example: `*p = 30;` |
| 5 | Value is modified directly<br>Example: `x = 30;` | Value is modified indirectly using dereferencing<br>Example: `*p = 20;` |
| 6 | Variable name represents the value stored | Pointer name represents an address, `*p` represents the value |

---

## Dereferencing a Pointer

**Definition:**  
Dereferencing a pointer means accessing or modifying the value stored at the memory address the pointer is pointing to.  

**Operator:** `*`

**How it works:**  
1. A pointer stores the address of a variable.  
2. Using the dereferencing operator `*` on the pointer lets you:  
   - Read the value at that address  
   - Modify the value at that address  

**Syntax:**  
```c
*pointer_name
Example:

c
Copy code
#include <stdio.h>

int main() {
    int x = 25;      // normal variable
    int *p = &x;     // pointer storing address of x

    // Access value using pointer
    printf("Value of x: %d\n", *p);   // prints 25

    // Modify value using pointer
    *p = 56;                        
    printf("New value of x: %d\n", x); // prints 56

    return 0;
}
Key Points:

int *p = &x; → pointer p stores the address of x

*p → accesses the value at that address

*p = 50; → changes the value of x indirectly through the pointer

& → gives address of a variable

* → gives value at that address (dereferencing)

Pointers over Normal Variables
Dynamic memory access – pointers can access memory locations directly.

Efficient data handling – pass large structures/arrays to functions without copying data.

Indirect modification – functions can modify variables outside their local scope.

Flexible data structures – enables linked lists, trees, graphs, etc.

Examples:

Changing variable via pointer

c
Copy code
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;  // pointer stores address of x

    *p = 20;      // modify x indirectly
    printf("Value of x: %d\n", x);  // prints 20

    return 0;
} 
Passing variable to function by pointer

c
Copy code
#include <stdio.h>

void increment(int *ptr) {
    *ptr = *ptr + 1;  // modifies original variable
}

int main() {
    int x = 5;
    increment(&x);
    printf("%d\n", x); // prints 6
    return 0;
}
Limitations and Risks
Dangling pointers – pointer pointing to memory that has been freed.

Memory leaks – forgetting to free dynamically allocated memory.

Segmentation faults – dereferencing uninitialized or NULL pointers.

Complexity – pointer arithmetic and memory management can be tricky.

Debugging difficulty – pointer errors can crash programs silently or cause unpredictable behavior.

Call by Value vs Call by Reference
Features	Call by Value	Call by Reference
How data is passed	A copy of the variable is passed to the function. Changes inside the function do not affect the original variable.	The address of the variable is passed. Changes inside the function modify the original variable.
Example 1	c void increment(int x){ x = x + 1; } int main(){ int a = 5; increment(a); printf("%d", a); // prints 5 }	c void increment(int *x){ *x = *x + 1; } int main(){ int a = 5; increment(&a); printf("%d", a); // prints 6 }
Example 2	c void swap(int a, int b){ int temp = a; a = b; b = temp; } int main(){ int x=2,y=3; swap(x,y); }	c void swap(int *a,int *b){ int temp=*a; *a=*b; *b=temp; } int main(){ int x=2,y=3; swap(&x,&y); // x=3,y=2 }
When is it preferred	When you don’t want the function to modify the original variable; When passing small/simple data types.	When you want the function to modify the original variable; When passing large data (like arrays/structs) to avoid copying overhead.
