Aim:
To study and implement various pointer operations in C++, including:
1. Accessing a variable’s value and address using pointers
2. Traversing arrays using pointers
3. Modifying variable values via pointers
4. Accessing array elements through pointer dereferencing

Apparatus:

- Computer with C++ compiler (GCC, Turbo C++, Code::Blocks, etc.)
- Basic knowledge of C++ syntax
- Understanding of pointers and arrays

Program Explanations & Algorithms:

Program 1 – Pointer Basics:

Explanation:
This program demonstrates how to declare a pointer, assign it the address of a variable, and access both the value and address using dereferencing and the address-of operator.

Algorithm:
1. Start the program.
2. Declare an integer variable `a` and assign a value.
3. Declare a pointer `aptr` and store the address of `a`.
4. Print the value of `a`.
5. Print the value by dereferencing the pointer (`*aptr`).
6. Print the pointer value (address stored in it).
7. Print the address of `a` directly.
8. End the program.

Program 2 – Traversing Array Using Pointers

Explanation:
This program shows how the array name acts like a pointer and how pointer arithmetic can be used to access array elements sequentially.

Algorithm:
1. Start the program.
2. Declare and initialize an integer array.
3. Print the first element by dereferencing the array name.
4. Declare a pointer and store the array address in it.
5. Loop from `i = 0` to array size – 1:
   - Print the element pointed by the pointer.
   - Increment the pointer to point to the next element.
6. End the program.

Program 3 – Modifying Variable Through Pointer

Explanation:
This program demonstrates that pointers can modify the value of a variable they point to, and also shows dereferencing with arrays.

Algorithm:
1. Start the program.
2. Declare an integer variable `a` and initialize it.
3. Declare a pointer and store the address of `a`.
4. Print the value at the pointer.
5. Modify the value at the pointer (`*aptr = new value`).
6. Print the updated value of `a`.
7. Declare and initialize an integer array.
8. Print the first array element by dereferencing the array name.
9. End the program.

Program 4 – Accessing Array Element Using Pointer

Explanation:
This short program prints the first element of an array using the array name as a pointer.

Algorithm:
1. Start the program.
2. Declare and initialize an integer array.
3. Print the first element by dereferencing the array name.
4. End the program.

Key Concepts:

- Pointer Declaration: A pointer must match the data type it points to.
- Dereferencing: Accessing the value stored at the address a pointer holds.
- Address-of Operator (`&`): Retrieves the memory location of a variable.
- Array–Pointer Relationship: The array name is the base address of its first element.
- Pointer Arithmetic: Incrementing a pointer moves it to the next element.

Conclusion:
Through these four programs, we learned:
- How to store and access the address of a variable using a pointer.
- How pointers and arrays are closely related.
- How to traverse arrays using pointer arithmetic.
- How to modify a variable’s value via a pointer.
- How dereferencing can be applied to both single variables and arrays.
