# Pointer Concepts in C

This README covers essential concepts related to **pointers in C**, including differences between normal variables and pointers, dereferencing, pointer advantages, limitations, and function passing methods.

---

## 1. Difference Between a Normal Variable and a Pointer

| Feature | Normal Variable | Pointer |
|---------|----------------|---------|
| **What it stores** | Stores the actual value | Stores the address of another variable |
| **How memory is accessed** | Accessed directly using the variable name | Accessed indirectly using dereferencing (`*`) |
| **How values are read** | By writing the variable name | By dereferencing the pointer (`*pointer`) |
| **How values are modified** | Assign a new value directly | Modify the value by dereferencing (`*pointer = value`) |

---

## 2. Variable Declaration and Definition vs Pointer Declaration and Definition

| No. | Variable Declaration and Definition | Pointer Declaration and Definition |
|-----|-----------------------------------|----------------------------------|
| 1 | Stores an actual value<br>**Example:** `int x = 20;` | Stores the address of a variable<br>**Example:** `int *p = &x;` |
| 2 | Value is accessed directly using variable name<br>**Example:** `printf("%d", x);` | Address is accessed using pointer name, value via dereferencing<br>**Example:** `printf("%d", *p);` |
| 3 | Address operator `&` is used to get its address<br>**Example:** `printf("%p", &x);` | Address operator `&` is used during initialization<br>**Example:** `p = &x;` |
| 4 | Dereferencing operator `*` is not used with normal variables | Dereferencing operator `*` is used to access value at address<br>**Example:** `*p = 30;` |
| 5 | Value is modified directly<br>**Example:** `x = 30;` | Value is modified indirectly using dereferencing<br>**Example:** `*p = 20;` |
| 6 | Variable name represents the value stored | Pointer name represents an address, `*p` represents the value |

---

## 3. Dereferencing a Pointer

**Definition:**  
Dereferencing a pointer means accessing or modifying the value stored at the memory address the pointer is pointing to. The dereferencing operator is `*`.

**How it works:**
1. A pointer stores the address of a variable.
2. Using the dereferencing operator `*` on the pointer lets you:
   - Read the value at that address
   - Modify the value at that address
3. **Syntax:** `*pointer_name`

**Example:**
```c
#include <stdio.h>

int main() {
    int x = 25;
    int *p = &x;

    printf("Value of x: %d\n", *p);

    *p = 56;                        
    printf("New value of x: %d\n", x);

    return 0;
}
